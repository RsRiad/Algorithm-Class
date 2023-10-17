
#include<bits/stdc++.h>
using namespace std;

//Insertion sort
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=1;i<n;i++)
    {
        int j;
        int temp=arr[i];
        for(j=i-1;j>=0 && arr[j]>temp;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
