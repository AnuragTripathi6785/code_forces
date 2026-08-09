#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<vector<char>> v(10,vector<char>(10));
    int c=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>v[i][j];
        }
    }
    int m=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            m=min({i,j,9-i,9-j});
            if(v[i][j]=='X'){
                c+=(m==0)?1:((m==1)?2:((m==2)?3:((m==3)?4:5)));
            }
        }
    }
    cout<<c<<endl;
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