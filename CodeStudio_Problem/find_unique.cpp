int findUnique(int *arr, int size)
{
    int ans;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}