#include <iostream>
#include <deque>
using namespace std;
void explainDQ(){
    deque<int>d;
    d.push_back(1);//{1}
    // d.emplace_back(2);//{1,2}
    d.push_front(3);//{3,1,2}
    d.emplace_front(4);//{4,3,1,2}
    d.pop_back();//{4,3,1}
    d.pop_front();//{3,1}
    d.back();//{3}
    d.front();//{}
}
int main()
{
    explainDQ();
}