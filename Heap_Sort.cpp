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

void sortArray(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        swap(arr[i],arr[0]);
        Heapify(arr,0,i);
    }
}

int main(){
    int arr[] = {10,3,8,9,5,13,18,14,11,70};
    BuildMaxHeap(arr,10);
    sortArray(arr,10);
    print(arr,10);
    return 0;
}