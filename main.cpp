#include <iostream>

bool isPrime(int n) {
	for(int i = 2 ; i< n  / 2; i++){
		if (n% i == 0) return false ; 

	}
	return true ; 
	}

int main() {	
	int number ;
	std::cout << "your prime number " << std::endl; 
	std::cin >> number ; 
	if (isPrime(number))  {
		std::cout << "prime number" << std::endl; 
	}
	else {
		std::cout << "not a prime number" << std::endl; 
	}


}
