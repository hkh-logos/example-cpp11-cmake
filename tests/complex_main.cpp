#include <iostream>

#include "complex.hpp"

int main() {
	Complex a(3,5);
	Complex b(3,0);
	Complex c(a);

	std::cout << a.getReal() << " " << a.getImag() << " " << a.abs() << std::endl;
	std::cout << b.getReal() << " " << b.getImag() << " " << b.abs() << std::endl;
	std::cout << c.getReal() << " " << c.getImag() << " " << c.abs() << std::endl;
	std::cout << c.getReal() << " " << c.getImag() << " " << c.abs() << std::endl;
	std::cout << c.getReal() << " " << c.getImag() << " " << c.abs() << std::endl; 
	 // Factorial
    std::cout << "Factorial of 5 is: " << factorial(5) << std::endl;
    
    // Reverse string
    std::string str = "Hello";
    std::cout << "Reversed string: " << reverseString(str) << std::endl;
    
    // Find maximum in an array
    std::vector<int> arr = {1, 3, 7, 2, 9, 5};
    std::cout << "Maximum value is: " << findMax(arr) << std::endl;
    
    // Prime check
    int num = 17;
    std::cout << num << (isPrime(num) ? " is " : " is not ") << "a prime number." << std::endl;
    
    // Fibonacci sequence
    int n = 10;
    std::vector<int> fibonacci = generateFibonacci(n);
    std::cout << "Fibonacci sequence: ";
    for (int num : fibonacci) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

	return 0;
}
