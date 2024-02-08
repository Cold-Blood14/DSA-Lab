#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    set<int> s1;
    s1.insert(70);
    s1.insert(420);
    s1.insert(911);
    s1.insert(999);
    s1.insert(13);
    s1.insert(39);
    s1.insert(20);
    s1.insert(50);
    set<int>::iterator i;
    set<int,greater <int>>::iterator y;
    set <int,greater <int>> s2(s1.begin(),s1.end());
    s2.erase(911);
    cout<<"Lower Bound: "<<*s1.lower_bound(13);
    cout<<"\nUpper Bound: "<<*s1.upper_bound(40);
    cout<<"\nLower Bound: "<<*s2.lower_bound(900);
    cout<<"\nUpper Bound: "<<*s2.upper_bound(38);
    s1.erase(s1.begin(),s1.find(70));
    s2.erase(911);
    cout<<"\nSet 1: ";
    for(i=s1.begin(); i!=s1.end(); i++)
        cout<<*i<<" ";

    cout<<"\nSet 2: ";
    for(y=s2.begin(); y!=s2.end(); y++)
        cout<<*y<<" ";
    y=s2.begin();
    advance(y,2);
    s2.erase(y);
    cout<<"\nSet 2: ";
    for(y=s2.begin(); y!=s2.end(); y++)
        cout<<*y<<" ";
    return 0;
}
