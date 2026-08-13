#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,b;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    b=a[0];
    for(int i=1;i<n;i++){
        b=b^a[i];
    }
    if(n%2){
        if(b!=0){
            cout<<b<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        if(b==0){
            cout<<b<<endl;
        }
        else{
            cout<<-1<<endl;
        }
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