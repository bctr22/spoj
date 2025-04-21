#include <iostream>

const int MOD = 1000007;

int main () {
    int T;
    std:: cin >> T;

    while (T--) {
        int N;
        std:: cin >> N;
        long long ans = 0;

        int x = 1;
        while (x <= N) {
            int y = N/x;
            int x_left = x;
            int x_right = N/y;

            // Sum of x from x_left to x_right: S = (x_right - x_left + 1) * (x_left + x_right) / 2
            long long count = x_right - x_left + 1;
            long long sumX = count * (x_left + x_right) / 2;

            ans = (ans + (sumX % MOD) * (y % MOD)) % MOD;

            x = x_right + 1; 
        }

        std:: cout << ans << std:: endl;
    }

    return 0;
}