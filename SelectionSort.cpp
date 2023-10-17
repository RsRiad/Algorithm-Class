#include<bits/stdc++.h>
using namespace std;

//Selection sort
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        int ind=i;
        int val=arr[i];
        for(int j=i;j<n;j++)
        {
            if(arr[j]<val)
            {
                val=arr[j];
                ind=j;
            }
        }
        swap(arr[i],arr[ind]);
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
