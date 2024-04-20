#include <bits/stdc++.h>
using namespace std;
long long merge(vector<long long> &arr, long long low, long long mid, long long high)
{
    long long cnt = 0;
    vector<long long> temp;
    long long left = low;
    long long right = mid + 1;
    while (left <= mid and right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            cnt += (mid - left + 1);
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (long long i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    return cnt;
}
long long mergeSort(vector<long long> &arr, long long low, long long high)
{
    long long cnt = 0;
    if (low >= high)
        return 0;
    long long mid = (low + high) / 2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}

long long int inversionCount(long long arr[], long long N)
{
    vector<long long> temp;
    for (long long int i = 0; i < N; i++)
        temp.push_back(arr[i]);
    return mergeSort(temp, 0, temp.size() - 1);
}
long long main()
{
}