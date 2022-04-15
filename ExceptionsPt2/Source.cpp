/*
Name: Landan Allen
CIS1202.800
Date: 4/15/2022
*/

#include <iostream>

using namespace std;

template <typename Temp>

Temp half(Temp num) {
    Temp type;
    type = num / 2;
    //Calculations, the nested if statement applies rounding rules
    if ( *typeid(num).name() == 'i') {
        if (type * 2 != num) {
            type++;
        }
    } return type;//Returns the value to main for display
}

int main() {
    
    double a = 7.0;
    float b = 5.0f;
    int c = 3;
    //Displaying half the values to the user
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}