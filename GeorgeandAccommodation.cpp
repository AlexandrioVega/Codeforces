#include <iostream>
int main(){
    int n, r{0}; 
    std::cin>>n;
    int p[n], q[n];
    for(int i{0};i < n;i++){
        std::cin>>p[i]>>q[i];
        if(q[i] - p[i] >= 2){
            r++;
        }
    }
    std::cout<<r;


    return 0;
}