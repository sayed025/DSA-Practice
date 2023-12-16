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
    vector<int> nums{0, 1, 0, 3, 12};
    int n = nums.size();
    int i = -1;

    for (i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            break;
        }
    }

    if (i >= 0)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[j], nums[i]);
                i++;
            }
        }
    }

    for (auto it : nums)
    {
        cout << it << " ";
    }
}

int main()
{
    fastio

    // test
    solve();

    return 0;
}