    #include <iostream>
     
    int main (){
        int shit;
        std:: cin >> shit;
     
        while (shit --){
            int n, x, y;
            std:: cin >> n >> x >> y;
            for (int i = x; i < n; i++){
                if(i % x == 0 && i % y != 0){
                    std:: cout << i << " ";
                }
            }
            std:: cout << "\n";
        }
        
        return 0;
    } 