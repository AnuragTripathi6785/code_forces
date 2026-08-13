#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m=0,k=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            k=0;
        }
        else{
            k++;
            if(k>m){
                m=k;
            }
        }
    }
    cout<<m<<endl;
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