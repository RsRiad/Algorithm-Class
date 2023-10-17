#include<bits/stdc++.h>
using namespace std;

//Linear Search
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int target;
    cin>>target;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<"Element Found\n";
            return 0;
        }
    }
    cout<<"Not Found"<<endl;
}
