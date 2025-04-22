#include <iostream>
#include <cmath>

int main() {
    int T;
    std:: cin >> T;
    
    double n[100];

    for (int i = 0; i < T; i++) {
        std:: cin >> n[i];
    }

    for (int i = 0; i < T; i++) {
        int result = static_cast<int>(sqrt(n[i]));
        std::cout << "#" << i + 1 << " " << result << std::endl;
    }

    return 0;
}