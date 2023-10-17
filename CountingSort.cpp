#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int b[n+1];
    int maxi=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>maxi)maxi=a[i];
        //maxi=max(maxi,a[i]);
    }

    int c[maxi+1];

    for(int i=0;i<=maxi;i++) c[i]=0;

    for(int i=1;i<=n;i++) c[a[i]]++;

    for(int i=1;i<=maxi;i++) c[i]=c[i]+c[i-1];


    //for(int j=1;j<=n;j++)
    for(int j=n+1;j>=1;j--)
    {
        b[c[a[j]]]=a[j];
        c[a[j]]--;
    }
    for(int i=1;i<=n;i++) cout<<b[i]<<" ";


}
