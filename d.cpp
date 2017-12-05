#include <iostream>

int main ()
{
	int subt = 1, i = 100;
	
	// run while long until i no longer > 1
	
	while ( i > 1 ) {
		subt += i; 		// subt = i + subt
		--i;			// subtracts 1 from i
	}
	std::cout << "The sum of 100 to 1 exclusive is "
		  << subt << std::endl;
	return 0;
} 
