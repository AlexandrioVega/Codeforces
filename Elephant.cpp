#include <iostream>

int main(){
    int x, y, z;
    std::cin>>x;
    y = x/5;
    if(y >= 0){
        z = x % 5;
        if(z > 0){
            y++;
        }
    }



    std::cout<<y;
    return 0;
}