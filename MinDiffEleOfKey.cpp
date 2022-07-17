
#include <bits/stdc++.h>
using namespace std;

int binarySearchDiff(int arr[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
            return arr[mid];
        if (arr[mid] < x)
            start = mid + 1;

        else
            end = mid - 1;
    }
    int ans1 = abs(arr[start] - x);
    int ans2 = abs(arr[end] - x);
    if (ans1 < ans2)
    {
        return arr[start];
    }
    else
    {
        return arr[end];
    }
}

int main(void)
{
    // int arr[] = {2, 3, 4, 10, 40};
    // int x = 11;
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << binarySearchDiff(arr, 0, n - 1, x) << endl;

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearchDiff(arr,0,n-1,key)<<endl;

    return 0;
}