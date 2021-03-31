#include <iostream>
using namespace std;

int main(){
    int arr[6] = {0, 6, 5, 10, 9, 0};

    int key;
    int j, i;

    //Sorting for nondecreasing
    for(j = 1; j < 6 ; j++) {
        key = arr[j];
        i = j - 1;

        while(i >= 0 && arr[i] > key){
            arr[i + 1] = arr[i];
            i = i - 1;
        }

        arr[i + 1] = key;
    }

    //Sorting for nonincreasing
    for(j = 1; j < 6 ; j++) {
        key = arr[j];
        i = j - 1;

        while(i >= 0 && arr[i] < key){
            arr[i + 1] = arr[i];
            i = i - 1;
        }

        arr[i + 1] = key;
    }

    return 0;
}