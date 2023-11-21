#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int r)
{
    int left = l;
    int right = mid + 1;
    vector<int> vec;

    while (left <= mid && right <= r)
    {
        if (arr[left] <= arr[right])
        {
            vec.push_back(arr[left]);
            left++;
        }
        else
        {
            vec.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        vec.push_back(arr[left]);
        left++;
    }
    while (right <= r)
    {
        vec.push_back(arr[right]);
        right++;
    }

    for (int i = l; i <= r; i++)
    {
        arr[i] = vec[i - l];
    }
}

void mergeSort(vector<int>& arr, int l, int r)
{
    // Write Your Code Here
    if (l >= r)
        return;

    int mid = (l + r) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
int main()
{
    vector<int>arr = {2, 1, 4, 3, 7, 5};
    mergeSort(arr, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}