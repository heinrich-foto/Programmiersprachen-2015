#include <iostream>
#include <string>
#include "utility.hpp"

int main (int argc, char* argv[])
{
	if (argc!=4)
	{
		std::cout << sortIntegers(std::stoi(argv[1]),std::stoi(argv[2]),std::stoi(argv[3])) << std::endl;
	}
	return 0;
}