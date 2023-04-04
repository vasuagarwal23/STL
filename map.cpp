//map--->key              value
//      unique      can be same can be different
//      example-Roll.no.
//       102          yash
//       103          yash
//from the above example we can see that roll.no.(key) is unique
//but values are same. 
//** key can be of any datatype **
//map store unique key in sorted manner
#include<iostream>
#include<map>
using namespace std;
 void explainmap(){
    map<int,int>mpp;//<key,value>
    map<int,pair<int,int>>m;//<key,<value1,value2>>
    map<pair<int,int>,int>m1;//<<key1,key2>,value>    
    mpp[1]=2;  //[{1,2}]
    // mpp.emplace({3,1});   //[{1,2},{3,1}]
    mpp.insert({2,4});//[{1,2},{2,4},{3,1}]

    // m1[{2,3}]=[2];  //{{2,3},2}
    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<" ";
    }
    cout<<mpp[1];//prints 2
    cout<<mpp[5];//prints NULL or 0 

    auto it=mpp.find(3);
    cout<<(it)->second;
    // or optimal way is
    auto it = mpp.find(3);
    if (it != mpp.end())
    {
        cout << it->second;
    }
    auto it=mpp.find(5);
    if (it != mpp.end())
    {
        cout << it->second;
    }
    auto it=mpp.lower_bound(2);
    auto it = mpp.upper_bound(2);
 }
 int main()
 {
    explainmap();
 }
