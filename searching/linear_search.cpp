#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1, 6, 7 ,0, 8, 3}; // Do not need to be sorted
    int number_to_find = 3;

    for(int i = 0; i < 6; i++){
        if(arr[i] == number_to_find)
            cout << "Number found" << endl;
    }

    return 0;
}