#include <iostream>

int main(){
    int T;
    std::cin >> T;

    for (int i = 1; i <= T; i++) {
        int N;
        std::cin >> N;
        int result = (N == 0) ? 0 : 1 + (N - 1) % 9;
        std::cout << "#" << i << " " << result << "\n";
    }
    
    return 0;
    
}