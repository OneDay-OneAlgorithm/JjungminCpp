#include <bits/stdc++.h>
using namespace std;
int n;
int ans = 0;
const int num = 1000001;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            ans += i;
        }
    }
    cout << ans << endl;
}