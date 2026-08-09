#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,e=0,o=0;
    cin>>a;
    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
        if(v[i]%2){
            o++;
        }
        else{
            e++;
        }
    }
    if(o>1 && e>1){
        if(o%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(o==0){
        if(e==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else {
        if(o%2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
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
}