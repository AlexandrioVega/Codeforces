#include <iostream>
#include <string>

int main(){
    int n;
    std::string s;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0 ){
            s = "I hate ";
        }
        else{
            s = "I love ";
        }
        std::cout<<s<<"\n";
    }
    
    return 0;
}