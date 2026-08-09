#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    string a,b,d;
    cin>>x>>y;
    cin>>a>>b;
    d=a;
    int c=0;
    for(int i=0;;i++){
        if(d.find(b) != std::string::npos){
            cout<<c<<endl;
            break;
        }
        if(d.size()>=b.size()+a.size()){
            cout<<-1<<endl;
            break;
        }
        c++;
        d=d+d;
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