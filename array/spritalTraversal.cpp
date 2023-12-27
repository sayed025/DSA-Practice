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
    vector<vector<int>> mat{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    int n = mat.size();
    int m = mat[0].size();

    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    vector<int> ans;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(mat[top][i]);
        }

        top++;

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }

        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    
}

int main()
{
    fastio

    // test
    solve();

    return 0;
}