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
    vector<int> nums{3,4,5,1,2};

    bool flag = true;
    int n = nums.size();
    for (int i = 1; i < n - 1; i++)
    {
        if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1])
        {
            flag = false;
            break;
        }
        else if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "yes" << endl;
    else
        cout << "No\n";
}

int main()
{
    fastio

    // test
    solve();

    return 0;
}