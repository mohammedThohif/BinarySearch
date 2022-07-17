// // C++ program to find first and last occurrences
// // of a number in a given sorted array
// 
// https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/

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
            end = mid -1;
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
            start = mid +1;
        }
        else if (x < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return last;
}

int main(void)
{
    int arr[] = { 10 , 30 , 30 , 30 , 30 , 50};
    int x = 30;
    int n = sizeof(arr) / sizeof(arr[0]);

    // int arr[] = { 1, 2, 2, 2, 2, 8, 8, 8, 8, 8 ,8 };
    // int n = sizeof(arr) / sizeof(int);
 
    // int x = 8;

    int result = binarySearchFirstOcc(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result << endl;
    int result1 = binarySearchLastOcc(arr, 0, n - 1, x);
    (result1 == -1) ? cout << "Element is not present in array"
                    : cout << "Element is present at index " << result1 << endl;

    return 0;
}



 
