#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,sz;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int>c;
    for(int i=0;i<n-1;i++){
        c.push_back(b[i]);
        if(b[i]>b[i+1]){
            c.push_back(b[i+1]);
        }
    }
    c.push_back(b[n-1]);
    sz=c.size();
    cout<<sz<<endl;
    for(int i=0;i<sz;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

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