#include <iostream>

int main()
{
	int sum = 0, val = 5;
	//keep running while as long as val is 5 to <= 55
	while (val <= 55) {
		sum += val;		// assigns sum + val to sum
		++val;			// adds 1 to val
	}
	std::cout << "Sum of 5 to 55 is "
		  << sum << std::endl;
	return 0;
}
