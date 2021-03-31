#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int arr[8] = {1, 2, 3, 6, 8, 9, 19, 22}; //The array must be sorted to apply this algorithm

    int l = 0;
    int r = 8 - 1;
    int m;

    int number_to_find = 7;

    do {
        m = floor((l + r) / 2);
        if (arr[m] < number_to_find)
            l = m + 1;
        else if(arr[m] > number_to_find)
            r = m - 1;
        else{
            cout << m << endl; //This returns the index of the number we want
            break;
        }

    } while(l <= r);

    return 0;

}