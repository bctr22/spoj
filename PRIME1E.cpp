#include <iostream>

bool check(int n){
    if (n < 2) return false;
    for (int i = 2; i*i <= n;i++) {
        if (n % i ==0 ) return false;
    }
    return true;
}

int main(){
    int t;
    std:: cin >> t;
    while (t --){
        int m, n;
        std:: cin >> m >> n;

        for (int i = m; i <= n; i++) {
            if (check(i)) {
                std::cout << i << "\n";
            }
        }

        std::cout << "\n";
    }
    return 0;
    
}