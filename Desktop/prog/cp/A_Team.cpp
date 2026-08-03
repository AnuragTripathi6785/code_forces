#include <bits/stdc++.h>
// #include<vector>
// #include<string>
// #include<iostream>
// #include<cmath>
// #include<algorithm>
using namespace std;

int solve()
{
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> v;
    int x;
    int y = 0;
    while (ss >> x)
    {
        y = y + x;
    }
    if (y < 2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// input code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b = 0;

    cin >> a;
    cin.ignore();
    while (a--)
    {
        b = b + solve();
    }
    cout << b;
}