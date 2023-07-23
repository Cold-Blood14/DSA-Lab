#include <iostream>
#define ll long long
using namespace std;
void InsertArr(int a[],int n);
int main()
{
    ll int n,i,j;
    int a[100]={0};
    cout<<"Enter the initial number of elements : "; cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    cout<<"Array before insertion:\n";
    for(i=0;i<n;i++) cout<<a[i]<<"\t";
    InsertArr(a,n);
    return 0;
}
void InsertArr(int a[],int n){
    n++;
    int i,j=n,x,pos;
    cout<<"\nEnter the position and value of the data you want to insert: ";
    cin>>pos>>x;
    while(j>pos-1){
        a[j]=a[j-1];
        j--;
    }
    a[pos-1]=x;
    cout<<"Array after insertion:\n";
    for(i=0;i<n;i++) cout<<a[i]<<"\t";
}
