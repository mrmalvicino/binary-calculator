#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size - 1; i = i + 1){
        std::cout << arr[i] << " ";
    }
    std::cout << arr[size - 1];
}

int getDigits(int decimal, int basis){
    int digits = 0;
    int value = pow(basis, digits);
    
    while(value < decimal){
        digits = digits + 1;
        value = pow(basis, digits);
    }

    return digits;
}

int basis_to_decimal(int number[], int basis_in, int digits_in){
    int decimal = 0;

    for(int i = 0; i < digits_in; i = i + 1){
        decimal = decimal + number[digits_in-1-i] * pow(basis_in, i);
    }

    return decimal;
}

int* decimal_to_basis(int decimal, int basis_out, int digits_out){
    int* number = new int[digits_out];

    for(int i = 0; i < digits_out; i = i + 1){
        number[i] = 0;
    }

    for(int i = digits_out - 1; i >= 0; i = i - 1){
        number[i] = decimal % basis_out;
        decimal = decimal / basis_out;
    }

    return number;
}

int main(){
    int number[] = {10, 10, 12, 11}; // Definir número a convertir
    int basis_in = 13; // Definir base en la que está dado el número
    int digits_in = sizeof(number) / sizeof(number[0]);
    
    int decimal = basis_to_decimal(number, basis_in, digits_in);
    
    printArray(number, digits_in);
    cout << "_(" << basis_in << ") = " << decimal << "_(10)" << endl;

    int basis_out = 10; // Definir base a la que se quiere convertir el número
    int digits_out = getDigits(decimal, basis_out);

    int* converted = decimal_to_basis(decimal, basis_out, digits_out);

    cout << decimal << "_(10) = ";
    printArray(converted, digits_out);
    cout << "_(" << basis_out << ")" << endl;

    return 0;
}