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
string x;
void lcs_print(int i, int j)
{
    if(a[i]=='\0' || b[j]=='\0')
    {
        cout<<x<<endl;
        return;
    }
    if(a[i]==b[i])
    {
        x+=a[i];
        lcs_print(i+1,j+1);
    }
    else
    {
        if(dp[i+1]>=dp[j])lcs_print(i+1,j);
        else lcs_print(i,j+1);
    }
}


int main()
{
    //PRESIDENT
    //PROVIDENCE
    //

    cin>>a>>b;
    memset(dp,-1,sizeof(dp));

    cout<<"Length : "<<lcs_length(0,0)<<endl;
    cout<<"Substring : ";
    lcs_print(0,0);
}
