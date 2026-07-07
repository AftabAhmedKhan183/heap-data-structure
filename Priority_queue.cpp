#include<bits/stdc++.h>
using namespace std;

int main(){
    // priority_queue<int> p;//Max Heap;
    priority_queue<int,vector<int>,greater<int>>p ; //Min Heap

    p.push(10);
    p.push(11);
    p.push(22);
    p.push(6);

    //top element
    cout<<p.top()<<endl;

    p.pop();
    cout<<p.top()<<endl;

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
}