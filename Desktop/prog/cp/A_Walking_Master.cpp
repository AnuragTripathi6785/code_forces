#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int>a(4);
    int x=0,y=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    x=a[0]-a[2];
    y=a[3]-a[1];
    if(y<0 || (x<0&&abs(x)>y)){
        cout<<-1<<endl;
    }
    else {
        if(x>0){
            cout<<y+y+x<<endl;
        }
        else{
            cout<<y+y-abs(x)<<endl;
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