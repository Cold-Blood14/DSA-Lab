#include <bits/stdc++.h>
using namespace std;
int EditDistance(string s1,string s2){
int m=s1.length();
int n=s2.length();
int dp[m+1][n+1];
for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
        if(i==0) dp[i][j]=j;
        else if(j==0) dp[i][j]=i;
        else if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
        else dp[i][j]=1+ min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
    }
}
return dp[m][n];
}
int main(){
    string s1,s2;
    getline(cin,s1);
    getchar();
    getline(cin,s2);
    cout<<"Distance:"<<EditDistance(s1,s2);
}
