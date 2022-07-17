/*
Consider an array of distinct numbers sorted in increasing order. 
The array has been rotated (clockwise) k number of times. Given such an array, find the value of k.

2 4 5 6 9 12
rot 1
12 2 4 5 6 9
rot 2
9 12 2 4 5 6

output is 2 

*/

#include <iostream>
using namespace std;
int BSCount(int *arr, int size)
{
    int start = 0, end = size - 1;
    int ans = -1;
    int k = start + (end - start) / 2;
    // Decreasing order array
    if (arr[k] <= arr[start] && arr[k] >= arr[end])
    {
        return end;
    }
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid + 1] >= arr[mid] && arr[mid - 1] > arr[mid])
        {
            return mid;
        }
        else
        {
            if (arr[mid] >= arr[start] && arr[mid] <= arr[end]) // Increasing order. Normal cases no rotation
            {
                return start;
            }
            else if (arr[mid] >= arr[start])
            {
                start = mid + 1;
            }
            else if (arr[mid] <= arr[end])
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    // int arr[15] = { 12, 13, 14, 15,2, 2, 2, 2, 2, 6, 7, 8, 9, 10, 11};

    //4 ,6, 7 ,8 ,9
    //9 4 6 7 8
    //8 9 4 6 7
    //7 8 9 4 6
    //6 
    int arr[6] = { 9 ,12, 2, 4, 5, 6 };
    // int n;
    // cin >> n;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int ans = BSCount(arr, 6);
    cout << ans << endl;
    return 0;
}