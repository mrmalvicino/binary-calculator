#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>

/**
 * @brief Prints a one dimentional array of integers in the terminal.
 * 
 * @param arr Memory adress of the array.
 * @param size Number of components of the array.
 */
void print_array(int arr[], int size);

/**
 * @brief Calculates the amount of digits needed to represent a decimal number in a given basis.
 * 
 * @param decimal Decimal number to be expressed in a certain basis.
 * @param basis Basis in which the number is going to be expressed.
 * @return Amount of digits needed.
 */
int get_digits(int decimal, int basis);

/**
 * @brief Converts to decimal a number given in a certain numerical basis.
 * 
 * @param number Array that contains in each component a digit of the number given in a certain basis to be converted to decimal.
 * @param basis_in Numerical basis of the number.
 * @param digits_in Amount of digits of the number.
 * @return Integer that represents the number expressed in decimal basis.
 */
int basis_to_decimal(int number[], int basis_in, int digits_in);

/**
 * @brief Converts a decimal number to a certain numerical basis.
 * 
 * @param decimal Integer that represents the number expressed in decimal basis to be convertes to a certain basis. 
 * @param basis_out Numerical basis which the number is going to be converted to.
 * @param digits_out Amount of digits needed to represent the decimal number in the given basis.
 * @return Memory adress of an array that contains in each component a digit of the number converted from decimal to a certain basis.
 */
int * decimal_to_basis(int decimal, int basis_out, int digits_out);

#endif // FUNCTIONS_H