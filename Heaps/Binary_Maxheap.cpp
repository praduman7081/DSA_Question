#include<iostream>
#include<vector>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void heapify(vector<int> &heap ,int i){
    int size = heap.size();
    int parent = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l<size &&  heap[l] > heap[parent])
    parent = l;
    if(r< size && heap[r] > heap[parent])
    parent = r;
    if(parent != i){
        swap(&heap[i], &heap[parent]);
        heapify( heap, parent);
            }
}

void insert_maxheap(vector<int> &heap, int key){
    int size = heap.size();
    if(size == 0){
        heap.push_back(key);
    }
    else{
        heap.push_back(key);
        for(int i= (size - 1 )/2; i>=0; i--){
            heapify(heap, i);
        }
    }

}

void deleteNode(vector<int> &heap, int num){
    int size = heap.size();
    int pos;
    for(pos =0; pos<size; pos++){
        if(heap[pos] == num){
         break;
        }
    }

    swap(&heap[pos] , &heap[size-1]);
    heap.pop_back();
    for(int i= (size-1)/ 2; i>=0; i--){
        heapify(heap, i);
    }
    
}

void print_maxHeap(vector<int> &heap){
    for(int i=0; i<heap.size(); i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec;
    insert_maxheap(vec, 3);
    insert_maxheap(vec, 4);
    insert_maxheap(vec, 9);
    insert_maxheap(vec, 5);
    insert_maxheap(vec, 2);
    insert_maxheap(vec, 10);
    insert_maxheap(vec, 11);

    cout<<" Max-Heap:";
    print_maxHeap(vec);
    cout<<endl;

    deleteNode(vec,2);
     cout<<" Max-Heap after deleting:";
    print_maxHeap(vec);
    cout<<endl;


    return 0;
}