#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int get_digits(int num_dec, int out_basis){
    /*
    Determine how many digits are needed to represent a give decimal number in a certain basis.
    */

    int digits = 0;
    int value = pow(out_basis, digits);
    
    while(value < num_dec){
        digits = digits + 1;
        value = pow(out_basis, digits);
    }

    return digits;
}


int basis_to_decimal(int num_b[], int in_basis){
    // Converts a given number in certain basis to decimal.

    int digits = sizeof(num_b);
    int num_dec = 0;

    for(int i = 0; i < digits; i = i + 1){
        num_dec = num_dec + num_b[digits-1-i] * pow(in_basis, i);
    }

    return num_dec;
}


int* decimal_to_basis(int num_dec, int out_basis){
    /*
    Converts a decimal number to a certain basis.
    */

    // Define an array of zeros:
    int size = get_digits(num_dec, out_basis);
    int* num_b = new int[size];

    for(int i = 0; i < size; i = i + 1){
        num_b[i] = 0;
    }

    // Replace the array bits with ones:
    for(int i = size - 1; i >= 0; i = i - 1){
        num_b[i] = num_dec % out_basis;
        num_dec = num_dec / out_basis;
    }

    return num_b;
}

/*
int* convert_basis(int num_b[], int in_basis, int out_basis){
    return 0;
}
*/

int main(){
    // Basis to decimal test:
    int num_b[] = {1,0,0,0,1,0,0,0};
    int in_basis = 2;
    cout << basis_to_decimal(num_b, in_basis) << endl;

    // Decimal to basis test:
    int num_dec = 136;
    int out_basis = 2;
    int size = get_digits(num_dec, out_basis);

    for(int i = 0; i < size; i = i + 1){
        cout << decimal_to_basis(num_dec, out_basis)[i];
    }

    cout << endl;

    // Basis to basis test:

    delete[] decimal_to_basis(num_dec, out_basis);

    return 0;
}