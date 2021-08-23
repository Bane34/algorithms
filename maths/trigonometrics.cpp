#include <iostream>
#include <math.h>

#define PI 3.141592653589790

namespace Bane{
    float toRandians(float degrees);

    double sin(double x);
}

int main(void){    

    // compare the math.h sin function with our hand coded one
    std::cout << Bane::sin(PI / 2) << '\n';
    std::cout << sin(PI / 2) << '\n';

    std::cout << Bane::toRandians(360) << '\n';

    return 0;
}

float Bane::toRandians(float degrees){
    float radians = (degrees / 360) * 2 * PI;

    return radians;
}

double Bane::sin(double x){
    int i = 0, j = 0, sign = 1;
    double numerator, denominator;
    double sin = 0;

    int n = 50; // Number of iterations of the sum, the larger n is, the accurancy raises

    for(i = 0; i <= n; i++){
        numerator = 1;
        for(j = 0; j < 2 * i + 1; j++){
            numerator *= x;
        }

        denominator = 1; 
        for(j = 1; j <= 2 * i + 1; j++){
            denominator *= j;
        }
        
        if(i % 2 == 0)
            sign = 1;
        else    
            sign = -1;

        sin += (numerator / denominator) * sign;
    }

    return sin;
}