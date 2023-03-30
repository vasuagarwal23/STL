// multiset->store element in sorted manner only(same as set but store duplicates element also )
#include<iostream>
#include<set>
using namespace std;
void explainmultiset(){
    multiset<int>m;
    m.insert(1);//{1}
    m.insert(1);//{1,1}
    m.insert(1);//{1,1,1}
    m.erase(1);//erase all 1
    int cnt=m.count(1);//3
    m.erase(m.find(1));//erase the first occurrence of 1
    //{1,1,1}
    // m.erase(m.find(1),m.find(1)+2);//{1 of 2nd index}
}
//unordered set->store unique element only not in sorted manner
//T.c->
//for all the operation is O(1) ,and in worst case it's O(n)(when collision occur only then we will get worst case complexity)
void explainuset()
{
    // unodered_set<int>uo;
    // lower and upper bound functions doesn't work
    //rest all are same set

}
int main(){
    explainmultiset();
}