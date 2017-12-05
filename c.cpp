#include <iostream>

int main () 
{
	int product = 1, weight = 8;
	// add weight for while loop until weight no longer < 50 pounds
	while (weight < 10) {
		product *= weight; 		// assigns product * weight to product
		++weight;		//adds one to weight
	}
	std::cout << "Product of weight from 8 to 10 exclusive is "
		  << product << std::endl;
	return 0;
}
