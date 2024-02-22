#include <bits/stdc++.h>
using namespace std;

void Merge(int a[],int l,int m, int r)
{
    int n1= m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0; i<n1; i++)
        L[i]=a[l+i];
    for(int j=0; j<n2; j++)
        R[j]=a[m+1+j];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}
void MergeSort(int a[],int l, int r)
{
    if (l<r)
    {
        int m=(l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        Merge(a,l,m,r);
    }
}
/*void PrintArray(int a[], int n)
{
    cout<<"\nArray: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}*/
int BS(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
}
int main()
{
    int n;
    cout<<"Size :";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int b[n];
    for(int i=0; i<n; i++)
        b[i]=a[i];
    MergeSort(b,0,n-1);
    for(int i=0;i<n;i++)
        cout<<BS(b,0,n-1,a[i])<<" ";
    return 0;
}


