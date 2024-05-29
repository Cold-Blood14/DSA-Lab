#include <iostream>
using namespace std;
int C(int coins[],int n,int sum)
{
    int c[n+1][sum+1];
    for(int i=0; i<=n; i++)
        for(int j=0; j<=sum; j++)
            c[i][j]=0;
    c[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            c[i][j]+=c[i-1][j];
            if(j-coins[i-1]>=0)  c[i][j]+=c[i][j-coins[i-1]];
        }
    }
    return c[n][sum];
}
int main()
{
    int coins[]= {1,2,3};
    int n=3;
    int sum=5;
    cout<<C(coins,n,sum);
    return 0;
}
