#include <iostream>
#include <iterator>
#include <map>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    map<int, int> m1,m2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        if(m1.find(x)==m1.end())
        m1[v[x]]=1;
        else m1[v[x]++];
    }
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(m1[v[i]]==1&&a==0) a=v[i];
        if(m1[v[i]]==1&&a!=0) b=v[i];
    }
    cout<<a+b;


}
