#include <iostream>
#define ll long long
using namespace std;
void Traverse(int a[]);
int main()
{
    ll int n,i,j;
    int a[100]= {0};
    Traverse(a);
    return 0;
}
void Traverse(int a[])
{
    int i,n;
    cout<<"Enter the initial number of elements : ";
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i];
    cout<<"Array Traversing:\n";
    for(i=0; i<n; i++) cout<<a[i]<<"\t";
}

