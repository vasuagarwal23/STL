//FIFO->first in first out
#include<iostream>  
#include<queue>
using namespace std;
void explainqueue(){
    queue<int>q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.push(3);//{1,2,3}
    q.emplace(4);//{1,2,3,4}

    q.back()+=5;//add four to the last element of the queue {1,2,3,9}
    cout<<q.back();//prints 9

    cout<<q.front();//prints 1
    q.pop();//delete the first element in the queue
    cout << q.front(); // prints 2
}
int main()
{
    explainqueue();
}
