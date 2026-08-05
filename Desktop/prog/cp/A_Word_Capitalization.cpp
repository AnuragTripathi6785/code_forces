#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string line;
    getline(cin,line);
    transform(line.begin(),line.begin()+1,line.begin(),::toupper);
    cout<<line;
    return 0;
}