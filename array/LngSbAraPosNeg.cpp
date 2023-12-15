#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef string str;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nn cout << "\n";
#define test     \
    int test;    \
    cin >> test; \
    while (test--)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    vector<int> nums{-1, 1, 1};
    int k = 1;
    int n = nums.size();
    map<long long, int> mp;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];

        if (sum == k)
        {
            maxLen = i + 1;
        }

        long long rem = sum - k;

        if (mp.find(rem) != mp.end())
        {
            int len = i - mp[rem];
            maxLen = max(maxLen, len);
        }

        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }

    cout << maxLen << endl;
}

int main()
{

    solve();

    return 0;
}