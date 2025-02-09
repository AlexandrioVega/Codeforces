#include <iostream>

int main(){
    int a, b, y{0};
    std::cin>>a>>b;
    do
    {
        y++;
        a *= 3; 
        b *= 2;
    } while (a <= b);
    
    std::cout<<y;
    return 0;
}