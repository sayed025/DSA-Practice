#include <bits/stdc++.h>
using namespace std;

vector<int> largestElement(int n, vector<int> &a)
{
    // Write your code here.
    int largest = a[0];
    int sLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            sLargest = largest;
            largest = a[i];
        }
        else if (a[i] > sLargest && a[i]<largest)
        {
            sLargest = a[i];
        }
    }

    vector<int> vec;
    vec.push_back(sLargest);

    int smallest = a[0];
    int sSmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            sSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < sSmallest && a[i]>smallest)
        {
            sSmallest = a[i];
        }
    }

    vec.push_back(sSmallest);
    // for (auto it : vec)
    // {
    //     cout << it << " ";
    // }
    return vec;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    largestElement(10, arr);
}