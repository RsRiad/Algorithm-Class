#include<bits/stdc++.h>
using namespace std;
const int lim=100;
string a,b;
int dp[lim][lim];

int lcs_length(int i, int j)
{
    if(i==a.size() || j==b.size()) return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=0;
    if(a[i]==b[j]) ans=1+(lcs_length(i+1,j+1));
    else
    {
        int ret1=lcs_length(i,j+1);
        int ret2=lcs_length(i+1,j);
        ans=max(ret1,ret2);
    }
    return dp[i][j]=ans;

}

int main()
{
    //PRESIDENT
    //PROVIDENCE
    //ANS: PRIDEN , 6

    cin>>a>>b;
    memset(dp,-1,sizeof(dp));
    cout<<"Length : "<<lcs_length(0,0)<<endl;
}
