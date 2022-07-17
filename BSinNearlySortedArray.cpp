
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
            return mid;
        if (arr[mid - 1] == x)
            return mid - 1;
        if (arr[mid + 1] == x)
            return mid + 1;
        if (arr[mid] < x)
            start = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int main(void)
{
    // int arr[] = {2, 3, 4, 10, 5, 40};
    // int x = 5;
    //int n = sizeof(arr) / sizeof(arr[0]);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>> arr[i];
    int x;
    cin>>x;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}