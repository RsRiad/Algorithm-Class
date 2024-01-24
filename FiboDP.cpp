#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5+10;

int dp[MAX];

int fiboDP(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n]=fiboDP(n-1)+fiboDP(n-2);
    return dp[n];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    cout<<fiboDP(n);
}
