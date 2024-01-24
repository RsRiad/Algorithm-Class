#include<bits/stdc++.h>
using namespace std;
const int lim=1e5;
int dp[2][lim];
int main()
{
    string x,y;
    cout<<"X: ";cin>>x;
    cout<<"Y: ";cin>>y;
    int n=x.size();
    int m=y.size();
    vector<pair<int ,int >>ind;
    for(int i=1;i<=n;i++)//FOR X
    {
        int I=i%2;
        if(i%2)
        {
            dp[I][0]=0;
            for(int j=1;j<=m;j++)//  FOR Y
            {
                if(x[i-1]==y[j-1])
                {
                    dp[I][j]=dp[I-1][j-1]+1;
                    ind.push_back({i,j});
                }
                else
                {
                    dp[I][j]=max(dp[I-1][j],dp[I][j-1]);
                }
            }
        }
        else{
            for(int j=1;j<=m;j++)
            {
                if(x[i-1]==y[j-1])
                {
                    dp[I][j]=dp[I+1][j-1]+1;
                    ind.push_back({i,j});
                }
                else
                {
                    dp[I][j]=max(dp[I][j-1],dp[I+1][j]);
                }
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<=m;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    int sz=-1;
    if(n%2)sz=dp[1][m];
    else sz=dp[0][m];
    cout<<"LCS length : "<<sz<<endl;

    cout<<"All indexes : ";

    for(auto p: ind)
    {
        cout<<"("<<p.first<<" , "<<p.second<<") ";
    }
    cout<<endl;

    reverse(ind.begin(),ind.end());

    int previous=INT_MAX;
    int present=INT_MAX;
    int remSz=sz;

    string lcs;
    for(auto p: ind)
    {
        if(remSz==0)break;
        if(p.second>=remSz && remSz<previous && p.second<previous && p.first<present)
        {
            lcs+=y[p.second-1];
            present=p.first;
            previous=p.second;
            remSz--;
        }
    }
    reverse(lcs.begin(),lcs.end());
    cout<<lcs<<endl;



}
