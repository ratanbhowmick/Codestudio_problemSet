// #include <bits/stdc++.h>
// using namespace std;
// int firstOcc(int arr[], int size, int key)
// {
//     int start = 0, end = size - 1;
//     int ans = -1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (key < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }
// int lastOcc(int arr[], int size, int key)
// {
//     int start = 0, end = size - 1;
//     int ans = -1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }
// int main()
// {
//     int even[6] = {3, 3, 6, 6, 8, 8};
//     cout << "First occurrence of 3 at Index is " << firstOcc(even, 6, 8) << endl;
//     cout << "Last occurrence of 3 at Index is " << lastOcc(even, 6, 8) << endl;
//     return 0;
// }

solve this problem

#include <bits/stdc++.h>
    int
    firstOcc(vector<int> &arr, int n, int key)
{
    int start = 0, end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(vector<int> &arr, int n, int key)
{
    int start = 0, end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int key)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, key);
    p.second = lastOcc(arr, n, key);
    return p;
}