#include <iostream>

int main()

{
	std::cout << "Please enter a file name: ";
	std::string iname;
	std::cin >> iname;
	ifstream ist {iname};	// ist is an input stream for the file named name
	if (!ist) error ("can't open input file ",iname);

	return 0;
}

