#include <iostream>

//We dont have cache so this is inefficient
int factorial(unsigned int n){
	if(n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main(){
	unsigned int n, res;
	std::cout << "Introduce a number: "; 
	std::cin >> n;

	//antoher ineficient method

	if(n == 0)
		std::cout << "1" << std::endl;

	for(int i = n - 1; i > 0; i--)
		n *= i;

	std::cout << n << std::endl;

	std::cout << "Introduce another number: ";
	std::cin >> n;
	std::cout << factorial(n);

	return 0;
}
