#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int num_dec = 234, basis = 2, digits = 0;


    // Determine how many digits are needed to represent num_dec in a given basis

    int value = pow(basis, digits);
    
    while(value < num_dec){
        digits = digits + 1;
        value = pow(basis, digits);
    }

    cout << digits << " digits are needed." << endl;


    // Define an array of zeros with the calculated ammount of digits
    
    int num_b[digits];

    for(int i = 0; i < digits; i = i + 1){
        num_b[i] = 0;
        cout << num_b[i];
    }

    cout << " array of zeros defined." << endl;


    // Replace the array bits with ones to form the number

    int aux = num_dec;

    for(int i = digits - 1; i >= 0; i = i - 1){
        num_b[i] = aux % basis;
        aux = aux / basis;
    }

    cout << num_dec << " = ";

    for(int i = 0; i < digits; i = i + 1){
        cout << num_b[i];
    }
}