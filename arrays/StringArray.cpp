#include <iostream>
#include <array>

int main() {
	std::array<int , 3> myArray = {1 , 2 , 3}; 
	std::cout << sizeof(myArray) << std::endl;
	std::cout << sizeof(myArray[0]) << std::endl; 
	std::cout << "lenght of myArray is " << sizeof(myArray)/sizeof(myArray[0]) << std::endl; 
}
