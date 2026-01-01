// Remove all the elements present at even positions in queue. Consider 0-based indexing.

// front  0   1   2   3   4  back
//        __________________
// q ->   10  20  30  40  50
// pop    __________________ push

#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q){
    for(int i=0; i<q.size(); i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
void removeAtEven(queue<int>& q){
    int n = q.size();  // VVIMP:- Store the initial size of the queue
    // BLUNDER:- DO NOT DIRECTLY USE q.size() IN FOR LOOP, CAZ, SIZE OF QUEUE IS DYNAMIC, IT WILL DISTURB THE LOOP !!
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            int x = q.front();
            q.push(x);
        }
        q.pop();
    }
}
int main(){
    queue<int> q;
    // input
    for(int i=0; i<5; i++) q.push((i+1)*10);
    // display
    display(q);

    // remove even indexed elements
    removeAtEven(q);

    // display the final output
    display(q);
}