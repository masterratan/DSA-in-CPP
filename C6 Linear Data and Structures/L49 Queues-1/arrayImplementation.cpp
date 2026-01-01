#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f; // front
    int b; // back
    int s; // size
    vector<int> arr;
    Queue(int val){
        f = 0;
        b = 0;
        s = 0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is FULL!"<<endl;
        }
        arr[b] = val;
        b++;
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
        }
        f++;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
        }
        return arr[f];
    }
    int back(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
        }
        return arr[b-1];
    }
    int size(){
        return s;
    }
    bool empty(){
        return s == 0;
    }
    void display(){
        for(int i=f; i<b; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    // push, pop, front, back, size, empty
    q.push(10); // front 10 back
    q.push(20); // front 10 20 back
    q.push(30); // front 10 20 30 back
    q.push(40); // front 10 20 30 40 back

    q.display();
    q.push(50); // front 10 20 30 40 50 back
    q.push(60); // Queue is FULL!
    q.display();
    q.pop(); // front 20 30 40 50 60 back
    q.display();
}

// Problems in array implementation of queue:-
// 1. When we pop element we are wasting space / same wastage happens while using vectors also. Can be fixed by using circular array.
// 2. Fixed size of queue due to fixed size of array. Can be fixed by using vectors.