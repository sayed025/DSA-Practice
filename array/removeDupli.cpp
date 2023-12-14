#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n)
{
    int cnt = 1;
    for (int i = 0, j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            cnt++;
            i++;
        }
    }
    return cnt;
}

int main()
{
    vector<int> arr = {1, 2, 2, 2, 6, 6, 6, 8, 9, 10};
    cout << removeDuplicates(arr, 10) << endl;
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}