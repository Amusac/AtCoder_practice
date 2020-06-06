#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, y;
    cin >> n >> y;
    int m = y / 1000 - n;
    // mが4の倍数と9の倍数の和で表されれば良い
    if (m < 0)
    {
        cout << "-1 -1 -1" << endl;
    }
    else if (m == 0)
    {
        cout << "0 0 " << n << endl;
    }
    else
    {
        for (int i = 0; i <= min(m, 9 * n); i += 9)
        {
            if ((m - i) % 4 == 0 && i / 9 + (m - i) / 4 <= n)
            {
                cout << i / 9 << " " << (m - i) / 4 << " " << n - i / 9 - (m - i) / 4 << endl;
                return 0;
            }
        }
        cout << "-1 -1 -1" << endl;
    }
}
