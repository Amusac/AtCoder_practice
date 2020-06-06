#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, n)
    {
        cin >> vec.at(i);
    }
    sort(vec.begin(), vec.end(), greater<int>());
    int res = 0;
    rep(i, n)
    {
        if (i % 2 == 0)
        {
            res += vec.at(i);
        }
        else
        {
            res -= vec.at(i);
        }
    }
    cout << res << endl;
}
