#include <iostream>
#define ll long long
using namespace std;
int Bin_src(int a[],int n);
int main()
{
    ll int inx,n,i,j;
    int a[100]={0};
    cout<<"Enter the initial number of elements : "; cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[j]>a[i])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    inx=Bin_src(a,n);
    inx>0?cout<<"The element is found in "<<inx+1<<"th position":cout<<"Element not found";
    return 0;
}
int Bin_src(int a[],int n){
    int i=0,j=n-1,mid,x;
    cout<<"Enter the data you want to search: "; cin>>x;
    while(i<=j){
        mid=i+(j-i)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]<x) i=mid+1;
        else j=mid-1;

    }
    return -1;
}


