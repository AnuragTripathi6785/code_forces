#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n-1);
    for(int i=0; i<n-1; i++){
        cin>>v[i];
    }
    cout<<-accumulate(v.begin(),v.end(),0)<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}