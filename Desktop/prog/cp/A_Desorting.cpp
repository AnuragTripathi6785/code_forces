#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x=0,min=-1;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(a[i-1]<=a[i]){
            x++;
        }
    }
    if(x!=n-1){
        cout<<0<<endl;
        return;
    }
    min=a[1]-a[0];
    for(int i=1;i<n;i++){
        if((a[i]-a[i-1])<min){
            min=a[i]-a[i-1];
        }
    }
    cout<<(min/2)+1<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}