#include <iostream>
#include <math.h>
int main(){

	bool isprime = true;
	int count = 1;
	int i = 0;
	while(count <= 10){
		for(int j = 2; j <= sqrt(i); j++){
			if( !( i % j) ){
				isprime = false;
				break;
			}
		}
		if(isprime){
			std::cout << i << ' ' ;
			count++;
		}
		isprime = true;
		i++;
	}

	std::cout << std::endl;
	return 0;

}