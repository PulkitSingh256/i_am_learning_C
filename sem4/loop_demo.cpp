#include <iostream>

int main(){

	std::cout << "While Loop\n";

	int a = 0;
	while(a < 1000){
		a++;
	}

	a = 0;
	std::cout << "Do-While Loop\n";
	do{
		a++;
	}while(a < 1000);

	std::cout << "for loop\n";

	a = 0;

	for(; a < 1000; a++){}

	std::cout << "switch case\n";

	switch(a){
		case 1000:
			std::cout << "a is 1000\n";
			a++;
			break;
		case 1001:
			std::cout << "a is 1001\n";
			a++;
			break;
		case 1002:
			std::cout << "a is 1002\n";
			a++;
			break;
		default:
			std::cout << "a out of range\n";
			break;
	}

	std::cout << "break in a for loop\n";

	a = 0;
	for(;;){
		a++;
		if(a > 400){
			break;
		}
	}

	std::cout << "loop break with a = " << a << std::endl;

	std::cout << "continue with for loop\n";

	for(;a < 500;a++){
		if(a < 400){
			continue;
		}
	}
	std::cout << "continue transfer the control flow to the start of the loop\n";

	return 0;
}