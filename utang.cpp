#include <iostream>

using namespace std;

void solve(){
    int m; // dollar yang dipunya
    short int n; // hari 
    cin>>n>>m; // input hari dan dollar 
    int a[n], b[n];
    for (int i = 0; i < n; ++i){
        cin>>a[i]; //dollar yang dipinjam pada hari i
    }
    for (int i = 0; i < n; ++i){
        cin>>b[i]; // harga penukaran 1 dollar ke lira pada hari i
    }

}
int main(){
    int t; // test case
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}