// quick sort
#include<bits/stdc++.h>
using namespace std;
//#define ll long long
void Swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int part(int a[],int l,int h)
{
    int piv=a[h];
    int i=(l-1);
    for(int j=l; j<h; j++)
        if(a[j]<=piv)
        {
            i++;
            Swap(&a[i],&a[j]);
        }

    Swap(&a[i+1],&a[h]);
    return i+1;
}
void quicksort(int a[],int l, int h)
{
    if(l<h)
    {
        int p=part(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
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
    quicksort(a,0,n-1);
    cout<<"sorted array: ";
    for(int i=0; i<n; i++)cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
