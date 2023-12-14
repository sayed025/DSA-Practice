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

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    int sum = (n * (n + 1)) / 2;

    for (int i = 0; i < n; i++)
    {
        sum -= nums[i];
    }

    return sum;
}
int main()
{
    vector<int> nums{0, 1, 2, 3, 4, 5, 7, 8, 9};
    cout << missingNumber(nums) << endl;

    return 0;
}