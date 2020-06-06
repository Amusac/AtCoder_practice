#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    rep(i, n)
    {
        int d;
        cin >> d;
        s.insert(d);
    }
    cout << s.size() << endl;
}
