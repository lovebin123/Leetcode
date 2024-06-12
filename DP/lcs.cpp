#include<bits/stdc++.h>
using namespace std;
int lcs(string st1,string st2,vector<vector<int>>&dp)
{
      int n,n1;
    n=st1.length();
    n1=st2.length();
    int i,j;
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n1;j++)
        {
            if(st1[i-1]==st2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }   
    }
    return dp[n][n1];
}
int main()
{
    string st1,st2;
    int i,j;
    cin>>st1>>st2;
    int n,n1;
    n=st1.length();
    n1=st2.length();
    vector<vector<int>>dp(n+1,vector<int>(n1+1,0));
    int k=lcs(st1,st2,dp);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n1;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<k;
   
}