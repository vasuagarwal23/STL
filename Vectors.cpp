#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void explainvector()
{   //vector 
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    // v.emplace_back(2);


    //--- Difference btw emplace_back and push_back ---:

    /* emplace_back would construct the object immediately in the vector,
    while push_back , would fir9st construct an anonymous object and then
    would copy it to the vector(push_back is slower than emplace_back)
    for vector of pair when we use push_back then we have to provide curly
    braces so that system can understand that the given input is pair
    but in emplace_back we don't have to provide curly braces the system 
    automatically understand that the given input is a pair.
    */

    // vector of pair
    vector<pair<int ,int> >vec;
    vec.push_back(make_pair(1,2));
    // vec.emplace_back(3,4); 

    //predefined size of vector
    vector<int>v0(5,10); //{10,10,10,10,10}
    vector<int>v3(5);//{0,0,0,0,0} or grabage value
    vector<int>v1(5,20);
    vector<int>v2(v1);
    //after all this if we use push_back or emplace_back the size will increase (as vector is dynamic).


    //Iterator-basically is pointer that points to the memory  of the element(begin,end,rend,rbegin).
    vector<int>::iterator it=v.begin();
    it++;
    std::cout<<*(it);
    it=it+2;
    std::cout<<*(it);
    std::cout<<v[0]<<" "<<v.at(0);//both will print element at 0 index.
    cout<<v.back(); //return last element of the vector
    //different ways of printing vector using loop
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        std::cout<<*(it);
    }
    for(auto it=v.begin();it!=v.end();it++)
    {
        std::cout << *(it);
    }
    for(auto it:v)//here it is not iterator it's datatype is int as auto is used. 
    {
        cout<<it<<" ";
    }
    //deletion in vector
    //{10,20,30,40}
    v.erase(v.begin()+1);//{10,30,40}
    //{10,20,12,23,35}
    v.erase(v.begin()+1,v.begin()+4);//{10,35}

    //insertion in vector
    vector<int>v(2,100);//{100,100}
    v.insert(v.begin(),10);//{10,100,100}
    v.insert(v.begin()+1,2,5);//{10,5,5,100,100}
    vector<int>copy(2,50);//{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,10,5,5,100,100}

    //size of vector
    cout<<v.size();
    //{20,80}
    v.pop_back();//don't use cout when we will pop_back->{20}

    //v1->{10,20}
    //v2->{30,40}
    v1.swap(v2); // v1->{30,40}  v2->{10,20}

    v.clear();//clear entire vector
    cout<<v.empty(); //return true or false 
    } 
int main()
{
    explainvector();
} 