#include <iostream>


int main() {

	int n1, n2;

	std::cout << "Enter Number 1: ";
	std::cin  >> n1;
	std::cout << "Enter Number 2: ";
	std::cin  >> n2;

	n1 += n2;
	n2  = n1 - n2;
	n1 -= n2;

	std::cout << "Number 1: " << n1 << ", Number 2: " << n2 << std::endl;

	return 0;

}
