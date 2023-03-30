#include <iostream>
#include <utility>
#include<algorithm>
using namespace std;
void explainpair()
{   //pair
    pair<int, int>a(make_pair(1,3));
    // or pair<int, int>a(1,3);
    cout << a.first << " " << a.second;
    cout<<endl;
    //pair of pair
    pair<int,pair<int,int> >b(1,make_pair(2,3));  
    //needs space btw two consecutive right angle brackets (> >)
    cout << b.first << " " << b.second.second<<" "<<b.second.first;
    cout<<endl;
    //pair of array
    pair<int, int> arr[] = {make_pair(1, 2), make_pair(3, 4), make_pair(5, 6)};
    int n = sizeof(arr) / sizeof(arr[0]); // get the size of the array
    for (int i = 0; i < n; i++)
    {
        cout << "(" << arr[i].first << ", " << arr[i].second << ")" << endl; // print each pair
    }

}
int main()
{
    explainpair();
}
