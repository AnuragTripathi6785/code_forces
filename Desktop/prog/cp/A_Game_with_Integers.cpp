#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    if(x%3==1 || x%3==2){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
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