#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

std::string replaceStringAll(std::string str,
                             const std::string &replace,
                             const std::string &with)
{
    if (!replace.empty())
    {
        std::size_t pos = 0;
        while ((pos = str.find(replace, pos)) != std::string::npos)
        {
            str.replace(pos, replace.length(), with);
            pos += with.length();
        }
    }
    return str;
}

int main()
{
    string s;
    cin >> s;
    s = replaceStringAll(s, "eraser", ".");
    s = replaceStringAll(s, "erase", ".");
    s = replaceStringAll(s, "dreamer", ".");
    s = replaceStringAll(s, "dream", ".");
    s = replaceStringAll(s, ".", "");
    if (s.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
