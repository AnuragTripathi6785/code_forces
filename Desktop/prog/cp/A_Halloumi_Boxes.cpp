#include<bits/stdc++.h>
using namespace std;
void solve(int y,int z){
    vector<int>v(y);
    for(int i=0;i<y;i++){
        cin>>v[i];
    }
    if(is_sorted(v.begin(),v.end())){
        cout<<"YES"<<endl;
    }
    else if(z<2){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z;
    cin>>x;
    while(x>0){
        x--;
        cin>>y>>z;
        solve(y,z);
    }
    return 0;
}