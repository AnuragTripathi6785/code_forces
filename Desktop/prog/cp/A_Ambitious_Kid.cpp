#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m,n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]=abs(v[i]);
    }
    m=*min_element(v.begin(),v.end());
    cout<<m<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}