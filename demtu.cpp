//DEMTU - Bé học tiếng Anh
//Method: "_a" is a word + 1 (endword)

//C++

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int demtu(string s) {
    int result = 0 ;
    int i = 0;
    while ( s[i] == ' '){
        i++;
        if ( i == s.size()) return 0;
    }
    while( i < s.size()-1){
        if ( s[i] == ' ' && s[i+1] != ' '){
            result += 1;
        }
        i++;
    }
    return result + 1;
}

int main(){
    string s;
    getline(cin,s);
    cout << demtu(s);

}