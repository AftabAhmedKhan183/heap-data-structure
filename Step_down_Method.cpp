#include<iostream>
using namespace std;

void Heapify(int arr[],int index,int n){
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(right<n && arr[largest]<arr[right])
    largest = right;

    if(left<n && arr[largest]<arr[left])
    largest = left;

    if(largest != index){
        swap(arr[index],arr[largest]);
        Heapify(arr,largest,n);
    }
}

void BuildMaxHeap(int arr[],int n){
    //We will be using Step Down Method here 
    for(int i=n/2-1;i>=0;i--){
        Heapify(arr,i,n);
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[] = {10,11,14,8,3,19,12};
    BuildMaxHeap(arr,7);

    print(arr,7);
    return 0;
}