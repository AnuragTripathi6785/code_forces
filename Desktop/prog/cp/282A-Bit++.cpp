#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
using namespace std;

int counter = 0;
void solve(string t)
{
    if (t == "X++" or t == "++X")
    {
        counter++;
    }
    else
    {
        counter--;
    }
}
int main()
{
    int i;
    string t;
    cin >> i;
    cin.ignore();
    while (i--)
    {
        getline(cin, t);
        solve(t);
    }
    cout << counter << endl;
    return 0;
}
