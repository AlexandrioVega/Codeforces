#include <iostream>
#include <string>

int main(){
    int n, x{0};
    std::string m;
    std::cin>>n;
    for(int l{0}; l<n; ++l){
        std::cin>>m;
        if(m == "X++" || m == "++X"){
            x++;
        }
        else{
            x--;
        }
    }
    std::cout<<x;
    return 0;
}