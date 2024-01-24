#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;
long long dp[123][mx];

int p[123], w[123];
int Sz, n;

long long solve ( int i, int curW )
{
    if (i>n) return 0;
    if (dp[i][curW]!=-1) return dp[i][curW];

    long long ret1 = 0, ret2 = 0;

    if (w[i]+curW<=Sz) ret1 = p[i] + solve(i+1,w[i]+curW );
    ret2 = solve(i+1,curW );

    return dp[i][curW]= max ( ret1, ret2 );
}


int main()
{
    cin>>n>>Sz;
    for ( int i=1;i<=n;i++ )
    {
        cin>>w[i]>>p[i];
    }

    memset(dp,-1,sizeof (dp));
    cout << "ANS : "<<solve ( 1, 0 ) << endl;

    /*
6 15
6 5
5 6
6 4
6 6
3 5
7 2
Items
2,4 and 5 should be taken. Then, the sum of the weights is
5+6+3=14, and the sum of the values is
6+6+5=17
    */

}
