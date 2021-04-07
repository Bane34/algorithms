#include <iostream>
using namespace std;

int main() {
    // Fibonacci series: 0 1 1 2 3 5 8 13 21 ...
    int x = 0, y = 1, z;

    while(x <= 255){
        z = x + y;
        x = y;
        y = z;

        cout << z << endl;
    }

    return 0;
}