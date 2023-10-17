#include<bits/stdc++.h>
using namespace std;

//Binary Search
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int target;
    cin>>target;

    sort(arr,arr+n);

    int low=0;
    int high=n-1;
    int mid;
    bool ok=true;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==target)
        {
            cout<<"Element Found\n";
            ok=false;
            break;
        }
        if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    if(ok)cout<<"Not Found";


}
