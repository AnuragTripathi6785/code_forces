#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

void solve(string t)
{
    int len = t.length();
    if (len <= 10)
    {
        cout << t << endl;
    }
    else
    {
        cout << t[0] << len - 2 << t[len - 1] << endl;
    }
}

int main()
{
    int i;
    string t;
    cin >> i;
    while (i--)
    {
        cin >> t;
        solve(t);
    }
    return 0;
}
