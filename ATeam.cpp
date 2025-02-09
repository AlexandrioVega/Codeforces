#include <iostream>

int main(){
    int n, p, v, t, q{0};
    std::cin>>n;
    for(int l = 0; l < n; l++){
        std::cin>>p>>v>>t;
        if(p + v + t > 1){
            q++;
        }
    }
    std::cout<<q;
    return 0;
}