#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
using namespace std;
void solve(int n)
{
    int m = n;
    vector<int> arr;
    while (m > 0)
    {
        m--;
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int binary[n];
    for (int i = 0; i < n; i++)
    {
        binary[arr[i] - 1] = (i % 2) ? 1 : 0;
    }
    int i;
    for (i = 0; i < n; i++)
    {
        if (((i + 1) != n) && (binary[i] == binary[i + 1]))
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (i == n)
    {
        cout << "YES" << endl;
        return;
    }
}
int main()
{
    int n;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}
