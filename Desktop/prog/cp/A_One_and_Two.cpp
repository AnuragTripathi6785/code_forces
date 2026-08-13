#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,c=0,x=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2){
            c++;
        }
    }
    if(c%2){
        cout<<-1<<endl;
    }
    else if(c==0){
        cout<<1<<endl;
    }
    else{
        for(int i=0;i<n;i++){
          if(a[i]==2){
            x++;
            if(x==c/2){
                cout<<i+1<<endl;
            }
          }  
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