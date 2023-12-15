#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a{1, 2, 3, 1, 1, 1, 1};
    long long k = 4;

    int i = 0, j = 0;
    int n = a.size();
    long long sum = 0;
    int maxi = 0;

    while (i < n)
    {
        sum += a[i];
        if (sum == k)
        {
            // cout << i << " " << j << endl;
            maxi = max(maxi, (i - j) + 1);
        }
        while (sum > k && j < i)
        {
            sum -= a[j];
            j++;
            if (sum == k)
            {
                // cout << i << " " << j << endl;
                maxi = max(maxi, (i - j) + 1);
            }
        }

        i++;
    }

    cout << maxi << endl;

    return 0;
}