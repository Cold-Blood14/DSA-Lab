#include <bits/stdc++.h>
using namespace std;
void Sort(vector<pair<double,double>> &v,double r[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(r[i]<r[j])
            {
                swap(v[i].first,v[j].first);
                swap(v[i].second,v[j].second);
                swap(r[i],r[j]);
            }
        }
    }
}
void K(vector<pair<double,double>> &v,double r[],int n,int cap)
{
    double x[n]= {0.0},tp=0.0;
    int i,u = cap;
    for( i=0;i<n;i++){
        if(v[i].first>u)
            break;
        else{
            tp+=v[i].second;
            u-=v[i].first;
        }
    }
    if(i<n)
        x[i]=r[i];
    tp+=x[i]*u;
    cout<<"\nMax Profit :"<<tp;
}
int main()
{
    vector<pair<double,double>> v;
    int cap;
    int n;
    cout<<"Capacity:";
    cin>>cap;
    cout<<"No. of Objects:";
    cin>>n;
    double r[n]= {0.0};
    cout<<"Weight - Profit\n";
    for(int i=0; i<n; i++)
    {
        double x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        r[i]=v[i].second/v[i].first;
    }
    Sort(v,r,n);
    K(v,r,n,cap);
}
