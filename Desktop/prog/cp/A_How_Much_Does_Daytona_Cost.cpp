#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    // vector<int> b(n);
    // for(int i=0;i<n;i++){
    //     b[i]=0;
    // }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==k){
            cout<<"YES"<<endl;
            return;
        }
        else if(i==n-1){
            cout<<"NO"<<endl;
            return;
        }
    }
    // sort(a.begin(),a.end());
    // for(int i=0;i<n;i++){
    // cout<<a[i];}
    // for(int i=0;i<n;i++){
    //     if(a[i]==k){
    //         d++;
    //     }
    //     else if(i!=0){
    //         if(a[i-1]==a[i]){
    //             if(c=0){c++;}
    //             c++;
    //     }
    //         else {
    //             b[i-1]=c;
    //             c=1;
    //     }
    // }
    // // }
    // for(int i=0;i<n;i++){
    //     if(b[i]>=d){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    //     else if(i=n-1){
    //         cout<<"YES"<<endl;
    //     }
    // }
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