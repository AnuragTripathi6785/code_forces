#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,i,j=0;
    cin>>n>>x;
    vector<int>v(n+2);
    v[0]=0;
    for(i=1;i<n+1;i++){
        cin>>v[i];
    }
    i=1;
    v[n+1]=x;
    while(i<n+1){
        v[j]=v[i]-v[j];
        j++;
        i++;
    }
    v[n]=2*(x-v[n]);
    v[n+1]=0;
    x=*max_element(v.begin(),v.end());
    cout<<x<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while((t--)>0){
        solve();
    }
    return 0;
}