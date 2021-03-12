#include <iostream>

// compare the accuracy of double vs float.
//

int main(){
    float rf = 0.0;
    double rd = 0.0;
    for(int i = 0; i < 100000; i++){
        rf += float(0.00001);
        rd += double(0.00001);
    }

    std::cout << rf << " " << rd << std::endl;
    return 0;
}