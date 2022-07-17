//Given a sorted array arr[] and a number x, write a function that counts the occurrences of
// x in arr[]. Expected time complexity is O(Logn)
//
//https://www.geeksforgeeks.org/count-number-of-occurrences-or-frequency-in-a-sorted-array/

#include <bits/stdc++.h>
using namespace std;

int binarySearchFirstOcc(int arr[], int start, int end, int x)
{
    int first = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            first = mid;
            end = mid - 1;
        }
        else if (x < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return first;
}
int binarySearchLastOcc(int arr[], int start, int end, int x)
{
    int last = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            last = mid;
            start = mid + 1;
        }
        else if (x < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return last;
}

int binarySearchCount(int arr[], int start, int end, int x)
{

    int result = binarySearchFirstOcc(arr, start, end, x);
    int result1 = binarySearchLastOcc(arr, start, end, x);
    if (result == -1 && result1 == -1)
    {
        return 0;
    }
    else
    {
        int sum = result1 - result + 1;
        return sum;
    }
}
int main(void)
{
    int arr[] = {10, 30, 30, 30, 30, 50};
    int x = 40;
    int n = sizeof(arr) / sizeof(arr[0]);

    // int arr[] = { 1, 2, 2, 2, 2, 8, 8, 8, 8, 8 ,8 };
    // int n = sizeof(arr) / sizeof(int);

    // int x = 8;

    int result = binarySearchCount(arr, 0, n - 1, x);
    cout << result << endl;

    return 0;
}
