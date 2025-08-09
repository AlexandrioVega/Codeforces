#include <iostream>

int main(){
    int n,k;
    std::cin>>n>>k;
    int a[n], b[n];
    bool s[n];
    for (int i = 0; i < n; i++){
        std::cin>>a[i]>>b[i];
        s[i] = true;
    }

    int i = 0;
    while(i < n){
        if(k >= a[i] && s[i]){
            k += b[i];
            s[i] = false;
            i = 0;
            continue;
        }
        i++;
    }
    std::cout<<k;
    return 0;
}