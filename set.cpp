//set->It store element in sorted and unique manner.
//apart from erase all the operation take O(logn).
//erase->O(1).
#include<iostream>
#include<set>
using namespace std;
void explainset(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(1);
    //Functionality of set can also be use in vector it only increase efficiency
    auto it=s.find(6);
    std::cout<<*(it);
    // If element is present return the iterator 
    // else will return s.end();

    //{1,2,3}
    s.erase(2);//erases2 //{1,3}--*(takes logarithmic time)*--
    auto it=s.find(2);
    s.erase(it);
    //{1,2,3,4,5}
    auto it1=s.find(1);
    auto it2=s.find(4);
    s.erase(it1,it2);//{4,5}(delete only 1 2 3 not 4)-->[first,last) 
    int cnt=s.count(1);
    //if 1 is present in container will return 1 because in set all elements are unique
    //if it doesn't exist it will return 0 
}
int main(){
    explainset();
}