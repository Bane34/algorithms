#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {5, 6, 3, 0, 0, 8, -4};
    int n = 7; // length of the array, or sizeof(arr)/sizeof(arr[0])
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]); // Here you can just make a temp variable to store arr[j] and then swap the values, it does not matter at all
        }
    }

    //Printing the sorted array
    for(int i = 0; i < 7; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';

    return 0;
}