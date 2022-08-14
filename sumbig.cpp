//SUMBIG - Tính tổng 2 số nguyên lớn
//Method: Use String Instead of Long Long

//C++
#include <iostream>
#include <string>
#include  <algorithm>
using namespace std;

string sumBig(string a, string b){
    if (a.size() < b.size()){
        string c = a;
        a = b;
        b = c;
    }

    int sizeA = a.size();
    int sizeB = b.size();
    bool sameSize = false, re = false;
    if (sizeA == sizeB){
        sameSize = true;
    }

    string sumStr = "";
    int x = 0, y = 0, sumSmall = 0;
    int i = 0;
    while(true){
        if ( i < sizeA) {
            x = a[sizeA - i - 1] - '0';
        }else {
            x = 0;
        }

        if ( i < sizeB) {
            y = b[sizeB - i - 1] - '0';
        }else{
            y = 0;
        }

        if (re == true){
            sumSmall = x + y +1;
            re = false;
        }else {
            sumSmall = x + y;
        }

        if (sumSmall >= 10) {
            re = true;
            sumSmall -= 10;
        }
        sumStr += sumSmall + '0';

        i += 1;
        if ( i >= sizeB && re == 0) {
            break;
        }

    }

    for (; i <sizeA; i++) {
        sumStr += a[sizeA - i -1];
    }
    reverse(sumStr.begin(),sumStr.end());
    return sumStr;
}

int main(){
    string a, b;
    getline(cin,a);
    getline(cin,b);
    
    cout << sumBig(a,b);

}