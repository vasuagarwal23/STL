#include<iostream>
#include<algorithm>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second>p2.second)
    {
        return true;
    }
    if(p1.second<p2.second)
    {
        return false;
    }
    if(p1.first>p2.first)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void algo(){
   int a[4]={2,4,1,4};
    // cout<<a[2];
    sort(a,a+4);//[start,end)
    sort(a+2,a+4);
    sort(a, a + 4, greater<int>()); // sort in descending order
    //vector sorting
    // sort(v.begin(),v.end());
   pair<int, int> arr[] = {make_pair(1, 2), make_pair(3, 2), make_pair(5, 6)};
   //want to sort in your way
   //in this we will sort pair according to second element of the pair
   //if second element are same then we will sort according to first element
   //for this we use a comparator
   sort(arr,arr+4,comp);


    int num=7;
    int cnt=__builtin_popcount(num);//return no. of set bit in 7-->3
    long long num=7888918198189189;
    int cnt=__builtin_popcountll(num);
     
    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));//it will return all the permutation of string.
    //in dictionary manner if my string is 123 it will print total 6 permutation
    //but if it is 321 it will print 3 .
    //so string should be in sorted manner for getting all the permutations
     int maxi=*max_element(a,a+4);


}
int main()
{
    algo();
}