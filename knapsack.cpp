#include <bits/stdc++.h>
using namespace std;
void Sort(int n, double w[],double p[],double r[])
{
    int i,j;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(r[i]<r[j])
            {
                swap(w[i],w[j]);
                swap(r[i],r[j]);
                swap(p[i],p[j]);
            }
        }
    }
}
double k(int n,int cap, double w[],double r[],double p[])
{
    double x[20]= {0.0},tp=0;
    double u=cap;
    int i;
    for(i=0; i<n; i++)
    {
        if(w[i]>u)
            break;
        else
        {
            x[i]=1.0;
            tp+=p[i];
            u-=w[i];
        }
    }
    if(i<n)
    {
        x[i]=p[i]/w[i];
    }
    tp+=x[i]*u;
    cout<<"Maximum Profit :"<<tp<<endl;
}
int main()
{
    int n,cap;
    double w[20],r[20],p[20];
    int i,j;
    cout<<"Capacity:";
    cin>>cap;
    cout<<"number of objects:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>w[i]>>p[i];
        r[i]=p[i]*1.0/w[i]*1.0;
    }
    Sort(n,w,p,r);
    k(n,cap,w,r,p);
}
