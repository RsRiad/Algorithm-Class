#include<bits/stdc++.h>
using namespace std;

//Bubble sort
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n-1;i++)
    {
        bool ok=false;
        for(int j=1;j<n-i;j++)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
                ok=true;
            }
        }
        if(!ok)break;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
