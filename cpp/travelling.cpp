#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t_prev = 0;
    int x_prev = 0;
    int y_prev = 0;
    rep(i, n)
    {
        int t, x, y;
        cin >> t >> x >> y;
        int passed_time = t - t_prev;
        int moving = abs(x - x_prev) + abs(y - y_prev);
        if (moving > passed_time || (passed_time - moving) % 2 == 1)
        {
            cout << "No" << endl;
            return 0;
        }
        t_prev = t;
        x_prev = x;
        y_prev = y;
    }
    cout << "Yes" << endl;
    return 0;
}
