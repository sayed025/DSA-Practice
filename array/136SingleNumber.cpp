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
    vector<int> nums{4, 1, 2, 1, 2};

    int n = nums.size();

    unordered_map<int, int> order;

    for (int i = 0; i < n; i++)
    {
        order[nums[i]]++;
    }
    int item;
    for (auto i = order.begin(); i != order.end(); i++)
    {
        if (i->second == 1)
        {
            item = i->first;
            break;
        }
    }

    cout << item << endl;
}

int main()
{

    solve();

    return 0;
}