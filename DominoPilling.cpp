#include <iostream>

int main() {
    int m, n, d;
    std::cin>>m>>n;
    
    d = (m * n - ((m * n) % 2))/ 2; 
    std::cout<<d;
    

    return 0;
}