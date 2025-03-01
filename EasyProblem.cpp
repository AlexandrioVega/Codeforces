#include <iostream>
#include <string>
int main(){
    int n;
    std::string s = "EASY";
    std::cin>>n;
    int N[n];
    for(int i = 0; i < n; i++){
        std::cin>>N[i];
        if(N[i] == 1){
            s = "HARD";
        }
    }
    std::cout<<s;
    return 0;
}