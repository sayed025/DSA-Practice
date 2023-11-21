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

bool check(int i, int n, string &nums)
{
    if (i >= n / 2)
        return true;
    if (nums[i] != nums[n - i - 1])
        return false;
    check(i + 1, n, nums);
}

bool isPalindrome(string &str)
{
    // Write your code here.
    int i = 0;
    int n = str.length();
    return check(i, n, str);
}

int main()
{

    return 0;
}