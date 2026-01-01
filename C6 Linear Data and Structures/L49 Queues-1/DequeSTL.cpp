#include<iostream>
#include<deque>
using namespace std;
int main (){
  deque<int> dq (2,100); // 100 100
  dq.push_front (200); // 200 100 100
  dq.push_front (300); // 300 200 100 100
}