#include <iostream>
#include <array> // we use the array library to be able to produce a normal static array 
#include <string> // strings 
int main() {
	// we declare it by specifying array type and size before giving it its name.        
	std::array<int , 10> myArray = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
	// we declare a variable containing its size by using the "sizeof"
	int arraySize = (sizeof(myArray)/sizeof(myArray[0])); 
	std::cout << "sizeof(myArray)" << "=  " << sizeof(myArray) << "\n" ; 
	std::cout << "sizeof(myArray[0])" << "=  " << sizeof(myArray[0]) << "\n" ;
	std::cout << "sizeof(myArray[0]) + sizeof(myArray[1]) + sizeof(myArray[2]) =  " <<sizeof(myArray[0]) + sizeof(myArray[1]) + sizeof(myArray[2]) << std::endl;
	std::cout << sizeof(myArray[0]) <<" + "<<  sizeof(myArray[1])<< " + " << sizeof(myArray[2])<<" = "<<  sizeof(myArray[0]) + sizeof(myArray[1]) + sizeof(myArray[2])  <<  std::endl;     
	// simple for loop to see the result 
	for(int i = 0 ; i < arraySize ; i++){ 
		std::cout << myArray[i] << std::endl;  
		

		} 	
	
	std::cout << "\n \n \n \n \n \n \n \n \n \n" << std::endl; 
	 	
	std::array<std::string , 10> myStringArray{"one" , "two" , "three" , "four" , "five" , "six" , "seven" , "height" , "nine" , "ten" };
	
	int stringArraySize = (sizeof(myStringArray)/sizeof(myStringArray[0])); 
	std::cout << "sizeof(myStringArray)" << "=  " << sizeof(myStringArray) << "\n" ; 
	std::cout << "sizeof(myStringArray[0])" << "=  " << sizeof(myStringArray[0]) << "\n" ;
	std::cout << "sizeof(myStringArray[0]) + sizeof(myStringArray[1]) + sizeof(myStringArray[2]) =  " <<sizeof(myStringArray[0]) + sizeof(myStringArray[1]) + sizeof(myStringArray[2]) << std::endl;
	std::cout << sizeof(myStringArray[0]) <<" + "<<  sizeof(myStringArray[1])<< " + " << sizeof(myStringArray[2])<<" = "<<  sizeof(myStringArray[0]) + sizeof(myStringArray[1]) + sizeof(myStringArray[2])  <<  std::endl;     
	// simple for loop to see the result 
	for(int i = 0 ; i < stringArraySize ; i++){ 
		std::cout << myStringArray[i] << std::endl;  
		

		} 
 	
	}
