#include <iostream>
using namespace std;

void solve(){
    int m, d, s;
    long long n;
    cin>>n>>m;
    int a[n];
    s = m;
    d = 0;
    for(int i = 0; i < n; i++){        
        cin>>a[i];
        if(s < a[i]){
            d = a[i];
            s = m;
        }
        else{
            s -= a[i];
        }
    }
    cout<<d<<"\n";
}
int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
