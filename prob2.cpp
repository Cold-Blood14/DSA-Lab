#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    multiset<int,greater<int>> s1;
    int n,x;
    cout<<"Enter the initial number of students: ";
    cin>>n;
    cout<<"Enter height: ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        s1.insert(x);
    }
    set<int, greater<int>>::iterator i;
    cout<<"Current line: ";
    for(i=s1.begin(); i!=s1.end(); i++)
        cout<<*i<<" ";
    cout<<"\nNew height: ";
    cin>>x;
    s1.insert(x);
    if(*s1.begin()==x||*s1.lower_bound(x)==x) cout<<"Will Face the Sun";
    else
    {
        i=s1.find(x);
        advance(i,-1);
        int x1=*i;
        if((float) x1>=(float)x*1.2)
            cout<<"Will not Face the Sun";
        else cout<<"\nWill Face the Sun";
    }
    return 0;
}
