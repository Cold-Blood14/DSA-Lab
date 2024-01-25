#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> a;
    vector <int> a1{12, 5,3,76, 9, 18, 54, 22};

    for(int i=0; i<=6; i++)
        a.push_back(2*i+3);
    for(auto x:a)
        cout<<x<<" ";
    a.insert(a.begin(),17);
    a.insert(a.begin()+2,51);
    a.insert(a.end(),69);
    a.erase(a.begin()+3);
    cout<<"\nAfter Insertion & Removal: ";
    for(auto x:a)
        cout<<x<<" ";
    cout<<"\nCurrent size: "<<a.size();
    cout<<"\nCurrent capacity: "<<a.capacity();
    sort(a1.begin(),a1.end());
    sort(a.begin()+2,a.end(),greater<int>());
    cout<<"\nDescending custom sort: ";
    for(auto x:a)
        cout<<x<<" ";
    cout<<"\nAscending Sort : ";
    for(auto x:a1)
        cout<<x<<" ";
    reverse(a1.begin(),a1.end());
    cout<<"\nReversed :\n";
    for(auto x:a1)
        cout<<x<<" ";
    cout<<"\nBefore Swap\nA:";
    for(auto x:a)
        cout<<x<<" ";
    cout<<"\nA1 :";
    for(auto x:a1)
        cout<<x<<" ";
    swap(a,a1);
    cout<<"\nSwapped vectors:\nA : ";
    for(auto x:a)
        cout<<x<<" ";
    cout<<"\nA1 :";
    for(auto x:a1)
        cout<<x<<" ";
    cout<<"\nFinal Size(A): "<<a.size()<<"\nFinal Capacity(A): "<<a.capacity();
    return 0;
}
