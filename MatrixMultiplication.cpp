
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],b[100][100],mul[100][100],r,c;
    cout<<"Enter the number of row: ";
    cin>>r;
    cout<<"Enter the number of column: ";
    cin>>c;
    cout<<"Enter the first matrix's elements:\n";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>a[i][j];

    cout<<"Enter the second matrix's elements:\n";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>b[i][j];


    cout<<"Result:\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            mul[i][j]=0;
            for(int k=0; k<c; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
