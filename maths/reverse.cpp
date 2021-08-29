#include <iostream>
#define LOG(x) std::cout << x << '\n';

// Algorithm to reverse an integer
// Example: reverse(504) -> return 405

int reverse(int n);

int main(void){

    LOG(reverse(1534236469));

    return 0;
}

int reverse(int n){
    int reversed = 0;

    while(n != 0) {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }

    return reversed;
}