#include <iostream>

using namespace std;

int main(){
    int p, ant = 0, saat;
    cin>>p;
    int a[p];
    for(int i = 0; i < p; i++){
        cin>>a[i];
        if(a[i] < 0 && ant < abs(a[i])){
            ant = abs(a[i]) - ant;
            saat = ant;
        }else{
            ant += a[i];
        }
   
    }
    cout<<saat;
    return 0;
}