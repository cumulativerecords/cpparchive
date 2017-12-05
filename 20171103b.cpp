#include <iostream>

int main ()
{
	int sum = 0, val = 998;		// keep while condition going until val no longer < 1000
	while (val < 1000) {
		sum += val;		// sum equals sum + val
		++val;			// add 1 to val
	}
	std::cout << "Sum of 998 to 1000 exclusive is "
		  << sum << std::endl;
	return 0;
} 
