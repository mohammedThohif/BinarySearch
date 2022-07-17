int LargerElementLowerIndex(int *arr, int n)
{
    int i = 0, j = 0, k = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; j < n; j++)
            {
                if (arr[i] > arr[j] && arr[j] > arr[k])
                {
                    count++;
                }
            }
        }
    }
    return count;
}