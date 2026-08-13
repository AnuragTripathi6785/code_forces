#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,k;
    cin>>n>>k;
    if(n%2==0||(k%2==1)){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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