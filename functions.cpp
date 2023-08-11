#include <iostream>
#include "functions.h"

void print_array(int arr[], int size){
    for (int i = 0; i < size - 1; i ++){
        std::cout << arr[i] << " ";
    }
    std::cout << arr[size - 1];
}

int get_digits(int decimal, int basis){
    int digits = 0;
    int value = pow(basis, digits);
    
    while(value < decimal){
        digits += 1;
        value = pow(basis, digits);
    }

    return digits;
}

int basis_to_decimal(int number[], int basis_in, int digits_in){
    int decimal = 0;

    for(int i = 0; i < digits_in; i ++){
        decimal += number[digits_in - 1 - i] * pow(basis_in, i);
    }

    return decimal;
}

int * decimal_to_basis(int decimal, int basis_out, int digits_out){
    int * number = new int[digits_out];

    for(int i = 0; i < digits_out; i ++){
        number[i] = 0;
    }

    for(int i = digits_out - 1; i >= 0; i --){
        number[i] = decimal % basis_out;
        decimal = decimal / basis_out;
    }

    return number;
}