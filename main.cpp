#include <iostream>
#include <string>
#include <cmath>

using namespace std;

template <typename T, std::size_t N>
std::size_t getSize(T (&)[N]){
    return N;
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i = i + 1){
        std::cout << arr[i] << " ";
    }
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

int basis_to_decimal(int number[], int digits, int basis_in){
    int decimal = 0;

    for(int i = 0; i < digits; i = i + 1){
        decimal = decimal + number[digits-1-i] * pow(basis_in, i);
    }

    return decimal;
}

int* decimal_to_basis(int decimal, int basis_out){
    int digits = getDigits(decimal, basis_out);
    int* number = new int[digits];

    for(int i = 0; i < digits; i = i + 1){
        number[i] = 0;
    }

    for(int i = digits - 1; i >= 0; i = i - 1){
        number[i] = decimal % basis_out;
        decimal = decimal / basis_out;
    }

    return number;
}

int main(){
    
    
    return 0;
}