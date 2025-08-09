#include <iostream>
using namespace std;

void solve(){
    short int n;
    cin>>n;
    int r[n];

    int cookies{1}, pola{1};


    for(int i = 0; i < n; ++i){
        cin>>r[i];
    }

    for(int i = 0; i < n - 1; ++i){
        if(r[i + 1] > r[i]){
            pola++;
        }else{
            pola = 1;
        }   
        cookies += pola;
    }

    cout<<cookies<<"\n";
}

int main(){
    short int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
} 
