//VT14 - Lại là đi tìm cặp đôi
//Method: The product of 2 negative numbers can be greater than 2 positive numbers

//C++

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int max1 = arr[0], max2 = arr[1];
    if (arr[0] < arr[1]){
        max1 = arr[1];
        max2 = arr[0];
    }
    int min1 = max2, min2 = max1;

    for (int i = 2 ; i < n ; i++){
        if (arr[i] > max2) {
            if (arr[i] >  max1) {
                max2 = max1;
                max1 = arr[i];
            }else {
                max2 = arr[i];
            }
        }
        if (arr[i] < min2) {
            if (arr[i] < min1) {
                min2 = min1;
                min1 = arr[i];
            }else {
                min2 = arr[i];
            }

        }

    }
    if ((max1 * max2) > (min1 * min2)){
        cout << max1 * max2;
    }else {
        cout << min1 * min2;
    }
}