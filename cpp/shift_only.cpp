
#include <vector>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> as(n);
  rep(i, n) { cin >> as.at(i); }
  int cnt = 0;
  bool ok = false;
  while (!ok) {
    rep(i, n) {
      if (as.at(i) % 2 == 1)
        ok = true;
      as.at(i) = as.at(i) / 2;
    }
    if (!ok)
      cnt++;
  }
  cout << cnt << endl;
}
