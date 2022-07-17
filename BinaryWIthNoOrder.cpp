
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int x)
{
    if (end == 0)
    {
        return arr[0];
    }
    else if (arr[0] > arr[1])
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
    }
    else
    {
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] == x)
                return mid;
            if (arr[mid] < x)
                start = mid + 1;

            else
                end = mid - 1;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = {50, 40, 30, 20, 10};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result<<endl;

    int arr1[] = {5 , 10 , 52 , 75 };
    int x1 = 10;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int result1 = binarySearch(arr1, 0, n1 - 1, x1);
    (result1 == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result1<<endl;
    return 0;
}