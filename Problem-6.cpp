#include <cmath>
#include <iostream>

int main(){
    double true_result = pow(M_PI, double(4)) / 90.0;
    double r1 = 0.0, r2 = 0.0;

    for(int i = 1; i < 10000; i++){
        r1 += 1.0 / pow(double(i), 4.0);
    }

    for(int i = 9999; i > 0; i--){
        r2 += 1.0 / pow(double(i), 4.0);
    }

    std::cout << true_result << std::endl;
    std::cout << r1 << " " << r2 << std::endl;

    // true relative error
    std::cout << fabs(true_result - r1) * 100 / true_result << " ";
    std::cout << fabs(true_result - r2) * 100 / true_result << std::endl;

    return 0;
}