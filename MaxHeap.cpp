#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

class MaxHeap{
    int *arr;
    int size;//current size of the heap
    int total_size;//size of the array

public:
    MaxHeap(int n){
        arr = new int[n];
        size=0;
        total_size = n;
    }

    void insert(int value){
        if(total_size == size){
            cout<<"Heap Oveflow"<<endl;
            return;
        }

        arr[size] = value;
        int index = size;
        size++;//size increased due to insertion of current element value

        while(index > 0 && arr[(index-1)/2] < arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index = (index-1)/2;
        }
        cout<<arr[index]<<" has been inserted into the heap\n"<<endl;
    }

    void print(){
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

    void Heapify(int index){
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+1;

        if(right<size && arr[right]>arr[largest])
            largest = right;
        if(left<size && arr[left]>arr[largest])
            largest = left;
        
        if(largest != index){
            swap(arr[largest],arr[index]);
            Heapify(largest);
        }
    }

    void Delete(){
        if(size==0){
            cout<<"Heap Underflow\n";
            return;
        }

        cout<<arr[0]<<" has been deleted";
        arr[0] = arr[size-1];
        size--;

        Heapify(0);
    }
};

int main(){
    MaxHeap H1(3);
    H1.insert(20);
    H1.insert(35);
    H1.insert(12);
    
    H1.print();

    H1.Delete();

    H1.print();


    return 0;
}