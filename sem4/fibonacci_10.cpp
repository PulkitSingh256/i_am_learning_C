#include <iostream>

int main() {

	int seq[10] = { 0, 1 };

	for (int i=2; i < 10; i++){

		seq[i] = seq[i-1] + seq[i-2];

	}

	std::cout << "Fibonacci Sequence: [ "; 

	for(int i=0; i < 10; i++){

		std::cout << seq[i] << ", ";

	}

	std::cout << "]" << std::endl;

	return 0;


}
