#include <iostream>
#include <cmath>

// estimates E^x accurate to the desired significant figures.
double estimateExponential(double x, int sigFig);
// converts significant figures to desired epsilon.
double calcEpsilon(int sigFid);
// returns the factorial of a number.
int factorial(int n);

int main(){
    double exponent = 0.5;
    int sigFig = 3;

    // estimate E^0.5 accurate to 3 significant figures.
    double answer = estimateExponential(exponent, sigFig);

    std::cout << answer << std::endl;
    return 0;
}


// estimates E^x accurate to the desired significant figures.
double estimateExponential(double x, int sigFig){
    double epsilon = calcEpsilon(sigFig);
    double answer = 1 + x;
    int i = 2;

    double previousEstimation = 0, currentEstimation = answer;

    while(abs(previousEstimation - currentEstimation) > epsilon){
        answer += pow(x, i)/ factorial(i);
        i++;
        previousEstimation = currentEstimation;
        currentEstimation = answer;
    }

    return answer;
}


// converts significant figures to desired epsilon
double calcEpsilon(int sigFig){
    return (0.5 * pow(10, (2-sigFig)));
}


// returns the factorial of a number.
int factorial(int n){
    if(n == 1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}