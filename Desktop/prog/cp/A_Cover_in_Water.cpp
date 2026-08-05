#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=0;
    cin>>n;
    vector<char>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x=0,y=0;
    for(int j=0;j<n;j++){
        if(v[j]=='.'){
            x++;
            y++;
            if(y>2){
                cout<<2<<endl;
                break;
            }
        }
        else if(y<3){
                y=0;
            }
            else{
                cout<<2<<endl;
                break;
            }
        if(j==n-1){
                cout<<x<<endl;
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