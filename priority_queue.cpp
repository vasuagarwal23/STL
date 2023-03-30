//***************************************************************************//
// priority_queue->puts element in container in sorting manner either in desc. 
//or asec. by default it's desc
// T.c---->
// push->O(logn)
// pop->O(logn)
// top->O(1)
//***************************************************************************//
#include<iostream>
#include<queue>
    using namespace std;
void explain(){
    //max heap(by default)
    priority_queue<int>pq;
    pq.push(1);//{1}
    pq.push(10);//{10,1}
    pq.push(9);//{10,9,1}
    pq.push(0);//{10,9,1,0}
    //we can also use emplace
    cout<<pq.top();//prints 10 
    pq.pop();
    cout << pq.top(); //prints 9
    cout<<pq.size();//size->3
    priority_queue<int> p1,p2;//swap
    p1.swap(p2);
    //min heap
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq.push(1);  //{1}
    pq.push(10); //{1,10}
    pq.push(9);  //{1,9,10}
    pq.push(0);  //{0,1,9,10}
    cout << pq.top(); // prints 0
    pq.pop();
    cout << pq.top();  // prints 1
}
int main(){
    explain();
}