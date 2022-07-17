
#include <bits/stdc++.h>
using namespace std;

int binarySearchDescend(int arr[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            start = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int main(void)
{
    int arr[] = {50,40,30,20,10};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearchDescend(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}