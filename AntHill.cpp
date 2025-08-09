#include <iostream>

using namespace std;

int main(){
    int p, ant = 0, saat = 0, hasil;
    cin>>p;
    int a[p];
    for(int i = 0; i < p; i++){
        cin>>a[i];
        if(a[i] > 0 && i != (p - 1)){
            if(a[i] > 0){
                ant +=a[i]; 
            }
            else{
                if(i != (p - 1)){
                saat += a[i];
                }
            }
        }
        hasil = abs(saat + ant);
    }
    cout<<hasil;
    return 0;
}