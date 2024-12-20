#ifndef MATHLIB_H
#define MATHLIB_H

/**
 * @brief Calculates the factorial of a given number.
 *
 * @param n The number for which the factorial is to be calculated.
 * Must be non-negative.
 * @return The factorial of the given number, or -1 if the input is negative.
 */
int factorial(int n);

/**
 * @brief Checks if a given number is a prime number.
 *
 * @param n The number to check for primality.
 * @return True if the number is prime, false otherwise.
 */
bool is_prime(int n);

#endif // MATHLIB_H
