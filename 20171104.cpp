#include <iostream>

int main ()
{
	std::cout << "\nHello world\n"
		  << std::endl;

	int x = 5, i = 0;
	while (x > 0)
	{
		std::cout << "";
		
		for (i = 5, i > 0; --i;)
		{
			std::cout << "#";
		}
	
		--x;
	
	}
	
	return 0;

}
