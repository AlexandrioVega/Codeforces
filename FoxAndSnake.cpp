#include <iostream>

int main(){
    short int n,m;
    std::cin >> n >> m;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= m ;j++){
            i % 2 != 0 || (i % 4 != 0 && j == m) ||(i % 4 == 0 && j == 1 )  ? std::cout<<'#' : std::cout<<'.';
        }
        std::cout<<"\n";
    }
    return 0;
}