#include <iostream>
#define ll long long
using namespace std;
void DeleteArr(int a[],int n);
int main()
{
    ll int n,i,j;
    int a[100]= {0};
    cout<<"Enter the initial number of elements : ";
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i];
    cout<<"Array before Deletion:\n";
    for(i=0; i<n; i++) cout<<a[i]<<"\t";
    DeleteArr(a,n);
    return 0;
}
void DeleteArr(int a[],int n)
{
    int i,j,x,pos;
    cout<<"\nEnter the data you want to erase: ";
    cin>>x;
    for(i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            pos =i+1;
            break;
        }
    }
        if(i<n){
        for(j=pos-1; j<n; j++) a[j]=a[j+1];
        --n;
        cout<<"Array after Deletion:\n";
        for(i=0; i<n; i++) cout<<a[i]<<"\t";
        }
        else
            cout<<"Data not found";
    }

