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

bool checkArmstrong(int n)
{
    // Write your code here
    vector<int> v;
    int dup = n;

    while (n > 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }

    int len = v.size();

    ll result = 0;
    ll item = 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            item *= v[i];
        }

        result += item;
        item = 1;
    }

    if(result == dup) return true;
    
    return false;
}

int main()
{

    checkArmstrong(1634);

    return 0;
}