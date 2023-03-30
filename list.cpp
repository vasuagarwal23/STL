#include<iostream>
#include<list>
using namespace std;
void explainlist(){
    list<int>li;
    li.push_back(1);//{1}
    li.emplace_back(2);//{1,2};

    li.push_front(3);//{3,2,1}
    li.emplace_front(4);//{4,3,2,1}
    //rest functions are same as vector
}
int main()
{   
    explainlist();
}