// count sort
#include<bits/stdc++.h>
using namespace std;
void cntSort(int a[],int n)
{
    int o[n];
    int m=0;
    for(int i=0; i<n; i++)m=max(m,a[i]);
    int cnt[m+1];
    for(int i=0; i<=m; i++)cnt[i]=0;
    for(int i=0; i<n; i++)cnt[a[i]]++;
    for(int i=1; i<n; i++)cnt[i]+=cnt[i-1];
    for(int i=n-1; i>=0; i--)
    {
        o[cnt[a[i]]-1]=a[i];
        cnt[a[i]]--;
    }
    for(int i=0; i<n; i++)a[i]=o[i];
}


int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    cntSort(a,n);
    cout<<"sorted array: ";
    for(int i=0; i<n; i++)cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
