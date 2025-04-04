#include <iostream>

bool isPrime(int value) {
	for(int i = 2 ; i < value / 2; i++){
		if (value % i == 0) return false ;
	}
	return true ;
}

int main() {
	int prime ; 
	std::cout << "Enter a prime number, if its prime , its prime\n" << std::endl; 
	std::cin >> prime ;
	if(isPrime(prime)) {
		std::cout << "this number is prime" << std::endl; 
	}
	else {
		std::cout << "this number is not prime\n";
	}
}
