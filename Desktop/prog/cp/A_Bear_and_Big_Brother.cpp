#include<bits/stdc++.h>
using namespace std;

void solve(int x, int y){
    int i;
    for(i=0;;i++){
        if((pow(3,i)*x-pow(2,i)*y)>0){
            cout<<i;
            break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin>>x>>y;
    solve(x,y);
    return 0;
}