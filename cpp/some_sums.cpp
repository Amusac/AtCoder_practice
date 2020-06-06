#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        string i_str = to_string(i);
        int sum = 0;
        rep(j, i_str.size())
        {
            sum += i_str[j] - '0';
        }
        if (a <= sum && sum <= b)
        {
            cnt += i;
        }
    }
    cout << cnt << endl;
}
