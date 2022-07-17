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

int BS(int arr[], int key, int start, int end)
{

    // cout << "bs called" << endl;
    
    while(start<=end){

    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
        //cout << mid;
        return mid;
    }
    else if (arr[mid] < key)
    {
        start = start + 1;
    }
    else
    {
        end = mid - 1;
    }
    
    }
    return -1;
}

int main()
{
  

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int key;
    cin >> key;

    int ans = BSCount(arr, n);
    // cout<<ans<<endl<<endl;
    
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl<<endl;
    
    //BS(arr, key, 0, ans-1);
    //BS(arr, key, ans, n-1);

    int ind = BS(arr, key, 0, ans-1);
    int ind2 = BS(arr, key, ans, n-1);

    // cout<<ind<<endl;
    // cout<<ind2<<endl;

    if (ind != -1 && ind2 == -1)
    {
        cout << ind << endl;
    }
    else if (ind == -1 && ind2 != -1)
    {
        cout << ind2 << endl;
    }
    else
    {
        cout << ind << endl;
    }


    return 0;
}