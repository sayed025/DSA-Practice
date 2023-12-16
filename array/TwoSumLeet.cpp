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

vector<int> solve()
{
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    int n = nums.size();
    map<int, int> mp;
    mp.insert({nums[0], 0});
    
    for (int i = 1; i < n; i++)
    {
        int item = target - nums[i];

        if (mp.find(item) != mp.end())
        {
            vector<int>ans;
            ans.push_back(i);
            ans.push_back(mp[item]);
            return ans;
        }
        mp.insert({nums[i], i});
    }
}

int main()
{
    fastio

    solve();

    return 0;
}