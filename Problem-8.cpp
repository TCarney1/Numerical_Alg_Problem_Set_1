#include <cmath>
#include <iostream>


int fact(int n);

int main(){
    double es = 0.5 * pow(10, 2-8);
    double x = 0.3 * M_PI, result = 1.0, term = 0.0;
    int i = 2, sign = -1;

    while(true){
        term = sign * pow(x, i) / fact(i);
        if(term * 100 / (result + term)){
            std::cout << (result + term) << std::endl;
            exit(0);
        }
        i += 2;
        sign *= -1;
    }
    return 0;
}

int fact(int n){
    if(n <= 1){
        return 1;
    } else {
        return n * fact(n-1);
    }
}