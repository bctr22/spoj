#include <iostream>

int main() {
    int T;
    std:: cin >> T;

    for (int i = 1; i <= T; i++) {
        int a, b;
        std:: cin >> a >> b;

        bool found = false;
        std:: cout << "#" << i << " ";

        for (int i = 1; ; i++) {
            int square = i * i;
            if (square > b) break;
            if (square >= a) {
                std:: cout << square << " ";
                found = true;
            }
        }

        if (!found) std:: cout << "NO NUMBER";
        std:: cout << std:: endl;
    }

    return 0;
}
