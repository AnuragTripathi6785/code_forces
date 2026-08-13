#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string b;
    cin>>b;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int i=0;
    for(;i<n;i++){
        if(b[i]==b[n-1-i]||(n-i-1-i<=0)){
            break;
        }
    }
    if(i<=(n-1-i)){
        cout<<n-i-i<<endl;
    }
    else{
        cout<<0<<endl;
    }
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