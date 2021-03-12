#include <iostream>
#include <cmath>

// write a program that solves quadratic equations

template <class T>
void quadratic(T a, T b, T c){
    T r1 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
    T r2 = (-b - sqrt(b * b - 4 * a * c))/(2 * a);

    std::cout << r1 << " " << r2 << std::endl;
}

int main(){
    float a = 1, b = 3000.001, c = 3.0;
    double da = 1, db = 3000.001, dc = 3.0;

    quadratic(a, b, c);
    quadratic(da, db, dc);

    return 0;
}