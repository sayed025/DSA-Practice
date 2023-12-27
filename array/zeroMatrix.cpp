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
    vector<vector<int>> matrix{{2, 4, 3}, {1, 0, 0}};
    int n = 2, m = 3;

    int cnt = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;

                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    cnt = 0;
                }
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            
            if (matrix[i][0] == 0 || matrix[0][j]==0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 1; j < m; j++)
        {
            matrix[0][j] = 0;
        }
    }

    if(cnt==0)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][0] = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
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