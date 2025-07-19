#include <iostream>

int main(){
    int t,a,b;
    std::cin>>t;
    int arr[t];
    for(int i = 1; i <= t; i++){
        std::cin>>a>>b;
        arr[i - 1] = a % b == 0 ? 0 : b - (a % b);
    }
    for(int i = 0; i < t; i++){
        std::cout<<arr[i]<<"\n";
    }
    

    return 0;
}