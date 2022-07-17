#include <iostream>
using namespace std;

int sumPeak(int arr[], int n)
{
    int sum = 0;
    if (n == 0)
    {
        return -1;
    }
    else if (n == 1)
    {
        return arr[0];
    }
    else
    {

        if (arr[0] > arr[1])
        {
            sum += arr[0];
        }
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                sum = sum + arr[i];
            }
        }
        if (arr[n - 1] > arr[n - 2])
        {
            sum = sum + arr[n - 1];
        }
        return sum;
    }
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
    cout << sumPeak(arr, n) << endl;
}