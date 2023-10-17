#include<bits/stdc++.h>
using namespace std;
void Merge(int A[], int low, int mid, int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high+1];
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j]) B[k++] = A[i++];
        else  B[k++] = A[j++];
    }
    while (i <= mid) B[k++] = A[i++];
    while (j <= high) B[k++] = A[j++];
    for (int i=low; i<=high; i++) A[i] = B[i];

}

void RecursiveMergeSort(int A[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high-low)/2;
        RecursiveMergeSort(A, low, mid);
        RecursiveMergeSort(A, mid+1, high);
        Merge(A, low, mid, high);
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    RecursiveMergeSort(a,0,(n-1));
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;


}
