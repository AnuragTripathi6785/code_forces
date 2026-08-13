#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,cn=0,cp=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]==-1){
            cn++;
        }
        else{
            cp++;
        }
    }
    int diff=cn-cp;
    int k=0;
    if(diff>0) k=(diff+1)/2;
    if((cn-k)%2!=0) k++;
    cout<<k<<endl;
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