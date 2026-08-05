#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a;
    string line,token;
    getline(cin, line);
    stringstream ss(line);
    while(getline(ss, token, '+')){
        a.push_back(stoi(token));
    }
    sort(a.begin(), a.end());
    for(size_t y=0; y< a.size(); y++){
        if(y>0) cout <<"+";
        cout<<a[y];
    }
    cout<<endl;
    return 0;
}