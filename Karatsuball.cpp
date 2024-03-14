#include <bits/stdc++.h>
#define ll long long
using namespace std;
int getSize(ll int a)
{
    int cnt=0;
    while(a)
    {
        cnt++;
        a/=10;
    }
    return cnt;
}
ll int k(ll int x,ll int y)
{
    if(x<10 && y<10)
        return x*y;
    ll int Size=max(getSize(x),getSize(y));
    int n=(int) floor(Size/2.0);
    ll int p= pow(10,n);
    ll int a= (ll int) floor(x/(double) p);
    ll int b=x%p;
    ll int c= (ll int) floor(y/(double) p);
    ll int d=y%p;
    ll int ac=k(a,c);
    ll int bd=k(b,d);
    ll int e=k(a+b,c+d) - ac - bd;
    return pow(10,2*n)*ac + pow(10,n)*e+bd;
}
int main()
{
    ll int x,y;
    cin>>x;
    cin>>y;
    cout<<"Product:"<<k(x,y);
}
