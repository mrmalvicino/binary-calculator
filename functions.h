#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>

void print_array(int arr[], int size);
int get_digits(int decimal, int basis);
int basis_to_decimal(int number[], int basis_in, int digits_in);
int * decimal_to_basis(int decimal, int basis_out, int digits_out);

#endif // FUNCTIONS_H