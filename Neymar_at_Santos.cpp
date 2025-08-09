#include <iostream>

int main(){ 
    long long bonus_neymar, gaji, skor_bola, bonus,teacher;
    std::cin>>teacher>>gaji>>skor_bola>>bonus;
    bonus_neymar = bonus * skor_bola <= gaji ? teacher * (bonus * skor_bola) : teacher * gaji;
    std::cout<<bonus_neymar;
    return 0;
}