#include <iostream>

int main(){
    int i, j, m[5][5], g{0};
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            std::cin>>m[i][j];
        }
    }
    // array tidak bisa di inisialisasi setelah deklarasi
    // a[i][j]{0}; error
    // hanya bisa digunakan saat deklarasi
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(m[i][j] == 1){
                if(i > 2){
                    g += i - 2;
                }
                if(i < 2){
                    g += 2 - i;
                }
                if(j > 2){
                    g += j - 2;
                }
                if(j < 2){
                    g += 2 - j;
                }
            }
        }
    }
    std::cout<<g;


    return 0;
}