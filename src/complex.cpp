#include "complex.hpp"

using namespace std;

Complex::Complex(double _real, double _imaginary) {
	this->real = _real;
	this->imaginary = _imaginary;
}

Complex::Complex(const Complex& rhs) {
	this->real = rhs.real;
	this->imaginary = rhs.imaginary;
}

Complex::~Complex() {

}

Complex& Complex::operator=(const Complex& rhs) {
	this->real = rhs.real;
	this->imaginary = rhs.imaginary;

	return *this;
}

double Complex::getReal() const {
	return this->real;
}

double Complex::getImag() const {
	return this->imaginary;
}

double Complex::abs() const {
	return sqrt(this->real * this->real + this->imaginary * this->imaginary);
}

// 1. Function to calculate factorial (Recursive)
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// 2. Function to reverse a string
string reverseString(const string& str) {
    string reversed = str;
    int n = reversed.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(reversed[i], reversed[n - i - 1]);
    }
    return reversed;
}

// 3. Function to find the maximum element in an array
int findMax(const vector<int>& arr) {
    int maxVal = arr[0];
    for (int num : arr) {
        if (num > maxVal) {
            maxVal = num;
        }
    }
    return maxVal;
}

// 4. Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// 5. Function to generate Fibonacci numbers
vector<int> generateFibonacci(int n) {
    vector<int> fib = {0, 1};
    for (int i = 2; i < n; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    return fib;
}