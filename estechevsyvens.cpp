#include <iostream>

int main(){
    int n, output{0};
    std::cin>>n;
    if(n % 2 == 0){
        int i = 0;
        while(i != n){
            output++;
            i += 2;
        }
        output % 2 == 0 ? std::cout<<"Esteche" : std::cout<<"Yvens";
    }else{
        int j = -1;
        while(j != n){
            output++;
            j += 2;
        }
        output % 4 == 0 ? std::cout<<"Esteche" : std::cout<<"Yvens";
    }
    return 0;
}