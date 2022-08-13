//SUMDIV - Tính tổng các ước số
//Method: If n % a == 0 => a and n /a are estimates of n

#include <iostream>
#include <cmath>
using namespace std;

int sumdiv(int n){
    int i = 1;
    int sum = 0;
    while ( i < sqrt(n)){
        if ( n % i == 0) {
            sum += i + n/i;
        }
        i++;
    }
    if ( i == sqrt(n)) sum += i;
    return sum;
}

int main(){
    int t;
    int n;
    cin >> t;
    for (int i = 0 ; i < t ; i++){
        cin >> n;
        cout << sumdiv(n) << endl;
    }

}