#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    multiset<int> s1;
    s1.insert(70);
    s1.insert(40);
    s1.insert(91);
    s1.insert(99);
    s1.insert(13);
    s1.insert(20);
    s1.insert(20);
    s1.insert(50);
    multiset <int,greater <int>> s2(s1.begin(),s1.end());
    s2.erase(911);
    multiset<int>::iterator i;
    cout<<"\nSet 1: ";
    for(i=s1.begin();i!=s1.end();i++)
        cout<<*i<<" ";
    multiset<int,greater <int>>::iterator y;
    cout<<"\nSet 2: ";
    for(y=s2.begin();y!=s2.end();y++)
        cout<<*y<<" ";
    cout<<"Lower Bound: "<<*s1.lower_bound(13);
    cout<<"\nUpper Bound: "<<*s1.upper_bound(40);
    cout<<"\nLower Bound: "<<*s2.lower_bound(90);
    cout<<"\nUpper Bound: "<<*s2.upper_bound(38);
    cout<<"\nSet 1: ";

    for(i=s1.begin();i!=s1.end();i++)
        cout<<*i<<" ";
    s1.erase(13);
    s2.erase(91);
    cout<<"\nSet 1: ";
    for(i=s1.begin();i!=s1.end();i++)
        cout<<*i<<" ";

    cout<<"\nSet 2: ";
    for(y=s2.begin();y!=s2.end();y++)
        cout<<*y<<" ";
    y=s2.begin();
    advance(y,2);
    s2.erase(y);
    cout<<"\nSet 2: ";
    for(y=s2.begin();y!=s2.end();y++)
        cout<<*y<<" ";
    cout<<"\nAddress: ";
    cout<<*s1.find(20);
    s1.erase(20);
    cout<<"\nAddress: ";
    cout<<*s1.find(20);
    return 0;
}
