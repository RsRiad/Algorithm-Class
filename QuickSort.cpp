#include<bits/stdc++.h>
using namespace std;


int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;

    while (true){
        while (i <= j && A[i] <= pivot) i++;
        while (A[j] >= pivot && j >= i) j--;
        if (j < i) break;
        else swap(A[i],A[j]);
    }
    swap(A[low],A[j]);
    return j;
}

void QuickSort(int A[], int low, int high){
    if (low < high){
        int p = partition(A, low, high);
        QuickSort(A, low, p-1);
        QuickSort(A, p+1, high);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    QuickSort(a,0,(n-1));
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;


}
