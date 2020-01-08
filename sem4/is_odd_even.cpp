#include <iostream>

int main() {

	int n1;

	std::cout << "Enter Number: ";
	std::cin  >> n1;

	if(n1 % 2){

		std::cout << n1 << " is Odd." << std::endl;

	} else {

		std::cout << n1 << " is Even." << std::endl;

	}

	return 0;

}
