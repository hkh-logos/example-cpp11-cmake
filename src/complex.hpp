#ifndef _SRC_COMPLEX_HPP_
#define _SRC_COMPLEX_HPP_

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

/**
 * @file complex.hpp
 * @author Rok Kos <kosrok97@gmail.com>
 * @brief Class that represent complex number.
 */

class Complex {
private:
	double real;
	double imaginary;

public:
	// Constructor
	Complex(double=0, double=0);
	// Copy constructor
	Complex(const Complex& rhs);
	// Destructor
	~Complex();
	// Assigment operator
	Complex& operator=(const Complex& rhs);
	// Methods
	double getReal() const;
	double getImag() const;
	double abs() const;
};


// 1. Function to calculate factorial (Recursive)
int factorial(int n);

// 2. Function to reverse a string
std::string reverseString(const std::string& str);

// 3. Function to find the maximum element in an array
int findMax(const std::vector<int>& arr);

// 4. Function to check if a number is prime
bool isPrime(int n);

std::vector<int> generateFibonacci(int n);

#endif // _SRC_COMPLEX_HPP_
