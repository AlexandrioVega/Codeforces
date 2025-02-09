#include <iostream>
#include <vector>
int main(){
    int n, k, s{0};
    std::cin>>n>>k;
    std::vector<int> a(n);
    for(int l = 0; l < n; l++){
            std::cin>>a[l];
    }
    for(int l = 0; l < n; l++ ){
            if(a[l] >= a[k - 1] && a[l] != 0){
                s++;
                // k - 1 : semisal n = 5, 0 -> 4 :: k = 5, 5 - 1 = 4
            }
    }
    std::cout<<s;
    return 0;
}