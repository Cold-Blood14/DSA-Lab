#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
    map<int, int> m1,m2;
    m1.insert({1,20});
    m1.insert({2,70});
    m1.insert({3,40});
    m1.insert({4,50});
    m1.insert({5,90});
    m1.insert({9,120});
    m1.insert({6,20});
    m1.insert({7,230});
    m1.insert({8,250});
    map<int, int>:: iterator i;
    cout<<"Current Map:\nKey\t Element\n";
    for(i=m1.begin();i!=m1.end();i++)
        cout<<i->first<<"\t"<<i->second<<"\n";
    m1[0]=22;
    m1.erase(m1.begin(),m1.find(4));
    cout<<"\nCurrent Map after erasing:\nKey\t Element\n";
    for(i=m1.begin();i!=m1.end();i++)
        cout<<i->first<<"\t"<<i->second<<"\n";
    m2.insert(m1.begin(),m1.end());
    m2.erase(4);
    cout<<"After Erasing in Map 2:\n";
    cout<<"Current Map:\nKey\t Element\n";
    for(i=m2.begin();i!=m2.end();i++)
        cout<<i->first<<"\t"<<i->second<<"\n";
    auto i1=m1.lower_bound(4),i2=m1.upper_bound(4),i3=m2.lower_bound(4),i4=m2.upper_bound(4);
    cout<<"Lower Bound of 4(Map 1):"<<i1->first<<" "<<i1->second;
    cout<<"\nUpper Bound of 4(Map 1):"<<i2->first<<" "<<i2->second;
    cout<<"\nLower Bound of 4(Map 2):"<<i3->first<<" "<<i3->second;
    cout<<"\nUpper Bound of 4(Map 2):"<<i4->first<<" "<<i4->second;
}
