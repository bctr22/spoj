    #include <iostream>
     
    int reverse(int n){
        int result = 0;
        while (n > 0) {
            result = result * 10 + n % 10;
            n /= 10;
        }
        return result;
    }
     
    int main (){
        int shit;
        std:: cin >> shit;
     
        while (shit --){
            int a, b;
            std:: cin >> a >> b;
     
            int ra = reverse(a);
            int rb = reverse(b);
            int sum = ra + rb;
            std:: cout <<  reverse(sum) << "\n";
     
        }
        
        return 0;
    } 