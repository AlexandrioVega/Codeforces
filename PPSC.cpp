#include <iostream>

using namespace std;

int main(){ 
    int t, pengulangan = 1;
    long long x, datas = 1, jumlah = 1;
    cin>>t;
    int tes[t];

    for(int i = 1; i <= t; i++){
        cin>>tes[i];
        while(jumlah <= tes[i]){
            for(int j = 1; j <= datas; j++){
                jumlah += datas;
                if(datas >= tes[i]){
                    break;
                }
                pengulangan += 1; 
            }
            datas += 1;

        }
    }



    return 0;
}