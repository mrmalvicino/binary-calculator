#include <iostream>
#include <cmath>
#include "functions.h"

int main(){
    int number[] = {10, 10, 12, 11}; // Definir número a convertir
    int basis_in = 13; // Definir base en la que está dado el número
    int digits_in = sizeof(number) / sizeof(number[0]);
    
    int decimal = basis_to_decimal(number, basis_in, digits_in);
    
    print_array(number, digits_in);
    std::cout << "_(" << basis_in << ") = " << decimal << "_(10)\n";

    int basis_out = 10; // Definir base a la que se quiere convertir el número
    int digits_out = get_digits(decimal, basis_out);

    int * converted = decimal_to_basis(decimal, basis_out, digits_out);

    std::cout << decimal << "_(10) = ";
    print_array(converted, digits_out);
    std::cout << "_(" << basis_out << ")\n";

    delete[] converted;

    return 0;
}