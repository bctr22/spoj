#include <iostream>
#include <cmath>

int main() {
    int T;
    std::cin >> T;  

    int a[T], b[T];  

    for (int i = 0; i < T; i++) {
        std::cin >> a[i] >> b[i];  
    }
    
    for (int i = 0; i < T; i++) {
        std::cout << "#" << i + 1 << " " << (long long)pow(a[i], b[i]) << std::endl;
    }
    
    return 0;
}
