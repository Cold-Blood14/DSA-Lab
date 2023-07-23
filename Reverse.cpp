#include <iostream>
#define ll long long
using namespace std;
void RevArr(int a[],int n);
int main()
{
    ll int n,i,j;
    int a[100]={0};
    cout<<"Enter the initial number of elements : "; cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    cout<<"Array before reversion:\n";
    for(i=0;i<n;i++) cout<<a[i]<<"\t";
    RevArr(a,n);
    return 0;
}
void RevArr(int a[],int n){
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<"Array after reversion:\n";
    for(i=0;i<n;i++) cout<<a[i]<<"\t";
}

