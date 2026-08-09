#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,y=-1,a=0,b=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    x=v[0];  
    for(int j=0;j<n;j++){
        if(v[j]==x){
            a++;
        }
        else if(y==-1){y=v[j];b++;}
        else if(v[j]==y) b++;
        else {cout<<"No\n"; return;}
    }
    cout<<((y==-1||abs(a-b)<=1)?"Yes\n":"No\n");
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