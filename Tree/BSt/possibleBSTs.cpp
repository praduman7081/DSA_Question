#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<Node*> constructTree(int start, int end)
{
    vector<Node *> trees;

    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for (int i = start; i <= end; i++)
    {
        vector<Node *> leftSubTree = constructTree(start, i - 1);
        vector<Node *> rightSubree = constructTree(i + 1, end);

        for (int j = 0; j < leftSubTree.size(); j++)
        {
            Node *left = leftSubTree[j];
            for (int k = 0; k < rightSubree.size(); k++)
            {
                Node *right = rightSubree[k];

                Node *node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    vector<Node*> totalTree = constructTree(1,3);
    for(int i=0; i<totalTree.size(); i++){
        cout<<(i+1) <<" : ";
        preOrder(totalTree[i]);
        cout<<endl;
    }
     return 0;
}