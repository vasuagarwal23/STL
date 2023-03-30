//LIFO->last in first out
#include<iostream>
#include<stack>
using namespace std;
void explainstack()
{
    stack<int>s;
    s.push(1);//{1}
    s.push(2);//{2,1}
    s.push(3);//{3,2,1}
    s.push(4);//{4,3,2,1}
    // s.emplace(5);
    cout<<s.top()<<" ";//prints the top element that is 4
    s.pop();//delete the top element that is 4 and the container after the executes will become{3,2,1}
    cout << s.top() << " "; // prints the top element that is 3 ** s[2] id invalid **
    cout<<s.size()<<" ";
    cout<<s.empty()<<" ";
    stack<int>s1,s2;
    s1.swap(s2);//swap s1 with s2;

}
int main()
{
    explainstack();
}