#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin>>a;
    cin.ignore();
    set<char> s(a.begin(),a.end());
    int y = s.size()%2;
    y?cout<<"IGNORE HIM!":cout<<"CHAT WITH HER!";
    return 0;
}