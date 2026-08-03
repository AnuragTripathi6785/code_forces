#include <bits/stdc++.h>
using namespace std;

// void solve() {}

// input code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int a;
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    cin.ignore();
    int c = (a < b) ? -1 : (a > b) ? 1
                                   : 0;
    cout << c;
}