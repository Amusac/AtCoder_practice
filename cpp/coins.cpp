#include <algorithm>
#include <iostream>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int cnt = 0;
  for (int i = 0; i <= min(x / 500, a); i++) {
    for (int j = 0; j <= min(x / 100 - i * 5, b); j++) {
      if ((x - i * 500 - j * 100) / 50 <= c) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}
