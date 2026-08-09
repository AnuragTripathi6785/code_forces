#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,x,m;
    cin>>n>>k>>x;
    // for(int i=1;i<=k;i++){
    //     if(i!=x){
    //         m.push_back(i);
    //     }
    // }
    if(k<3&&x==1){
        if(n%2 || k==1){
        cout<<"NO"<<endl;
        return;}
    }
    cout<<"Yes"<<endl;
    if(x==1){
            cout<<n/2<<endl;
            if(n%2==0){
            for(int i=0;i<(n/2);i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
            else{
                for(int i=0;i<(n/2)-1;i++){
                cout<<2<<" ";
            }
            cout<<3<<endl;
            }
        }
    else{
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
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