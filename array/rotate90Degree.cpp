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
    vector<vector<int>> mat{{1, 2}, {3, 4}};
    int n = mat.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    fastio

    // test
    solve();

    return 0;
}