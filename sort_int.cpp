#include <iostream>
#include <string>
#include "utility.hpp"

int main (int argc, char* argv[])
{
	if (argc==4)
	{
		std::cout << sortIntegers(std::stoi(argv[1]),std::stoi(argv[2]),std::stoi(argv[3])) << std::endl;
	}
	else
	{
		std::cout << "Please enter 3 Integers as Input. Start the Programm like:"<<std::endl << argv[0] << " A B C"<<std::endl;
	}
	return 0;
}