#include<bits/stdc++.h>
using namespace std;
int f(string st,vector<vector<int>>&dp)
{
    int i,j;
    int n=st.length();
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
           if(st[i]==st[j] )
           {
                  dp[i][j]=1+dp[i-1][j-1];
             
           }
           else{
         dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
           }
        }
    }
    return dp[n][n];
}
int main()
{
    string st;
    cin>>st;
    int n=st.length();
    vector<vector<int>>dp(n,vector<int>(n,0));
    int i,j;
    for(i=0;i<n;i++)
    {
        dp[i][i]=1;
    }
    cout<<f(st,dp);
    
}
