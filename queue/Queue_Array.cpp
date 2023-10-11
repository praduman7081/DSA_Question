#include <iostream>
using namespace std;

#define n 10

class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int val)
    {
        if (back == n - 1)
        {
            cout << "Overflow" << endl;
        }
        back++;
        arr[back] = val;

        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "No element in the queue" << endl;
        }
        else
        {
            front++;
        }
    }

    void peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No element in the queue" << endl;
        }
        else
        {
            cout << arr[front] << endl;
        }
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        else{
            return false;
        }
       
    }
};

int main()
{
    queue qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    // qu.push(4);
    // qu.push(5);
    qu.peek();
    qu.pop();
   cout<<qu.empty()<<endl;
    qu.peek();
    qu.pop();
    qu.peek();
    qu.pop();
   cout<<qu.empty()<<endl;

    return 0;
}