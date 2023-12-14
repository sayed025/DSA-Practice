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
    vector<int> nums1{1, 2, 3, 0, 0, 0};
    vector<int> nums2{2, 5, 6};
    int m = 3, n = 3;

    vector<int> ans;
    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }
        else if (nums2[j] < nums1[i])
        {

            ans.push_back(nums2[j]);

            j++;
        }
        else
        {
            ans.push_back(nums1[i]);
            ans.push_back(nums2[j]);
            i++;
            j++;
        }
    }

    for (int k = i; k < m; k++)
    {
        ans.push_back(nums1[k]);
    }

    for (int k = j; k < n; k++)
    {
        ans.push_back(nums2[k]);
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
    int sz = ans.size();

    for (int k = 0; i < ans.size(); k++)
    {
        nums1[k] = ans[k];
    }
}

int main()
{

    solve();

    return 0;
}