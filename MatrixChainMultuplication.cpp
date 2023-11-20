#include<bits/stdc++.h>
using namespace std;
const int mx=100;
int arr[mx];
int dp[mx][mx];

int mcm(int i, int j)
{
    if(i==j) return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    dp[i][j]=INT_MAX;
    for(int k=i;k<j;k++){
        dp[i][j]=min(dp[i][j],mcm(i,k)+mcm(k+1,j)+arr[i-1]*arr[k]*arr[j]);
    }
    return dp[i][j];
}
int main()
{
    int n,i;
    cout<<"Enter number of matrices\n";
    cin>>n;
    cout<<"Enter dimensions \n";
    for(i=0; i<n; i++)
    {
        cout<<"Enter d"<<i<<" = ";
        cin>>arr[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<"Minimum number of multiplications is => "<<mcm(1, n-1);
    return 0;
}
