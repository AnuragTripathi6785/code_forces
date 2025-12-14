#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve(int t)
{
    if (t == 2 or t % 2)
        printf("NO");
    else
        printf("YES");
}

int main()
{
    int t;
    cin >> t;
    // while (t--)
    solve(t);
    return 0;
}
