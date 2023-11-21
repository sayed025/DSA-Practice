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

long solve(long n)
{
    vector<int> vec;
    while (n > 0)
    {
        int item = n % 2;
        vec.push_back(item);
        n /= 2;
    }

    int len = vec.size();
    int power = 32 - len;
    long long result = 0;

    int j = 0;
    for (int i = 31; i >= power; i--)
    {
        if (vec[j] == 1)
            result += (1 << i);

        j++;
    }

    return result;
}

int main()
{

    cout << solve(6) << endl;

    return 0;
}