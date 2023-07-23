#include <iostream>
#define ll long long
using namespace std;
void lin_src(int a[],int n);
int main()
{
    ll int inx,n,i,j;
    int a[100]= {0};
    cout<<"Enter the initial number of elements : ";
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i];
    lin_src(a,n);
    return 0;
}
void lin_src(int a[],int n)
{
    int i,j,inx,x;
    cout<<"Enter the data you want to search: ";
    cin>>x;
    while(i<n)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]==x)
            {
                cout<<"The element is found in " <<i+1<<"th position\n";
                a[i]=-1;
                break;
            }
        }
    }
}


