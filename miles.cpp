#include <iostream>
#include <string>
#include "utility.hpp"


int main (int argc, char* argv[])
{	
	double InputValue = 0.0;
	
	if (argc!=2)
	{
		// Fehler bei zu vielen Parametern, Programm wird fortgesetzt.
		(argc>2)?std::cout << "Zu viele Parameter. Programm wird interaktiv ausgeführt. Als Komandozeilenprogramm nur einen Parameter eingeben." <<std::endl << argv[0] << " 322.29" <<std::endl : std::cout ; 
		
		std::cout << "Meilen eingeben: "<< std::endl;
		std::cin >> InputValue;
		std::cout << "   " << InputValue << " miles = " ;
	}
	else
	{
		// Eingabeparameter. wird geparst und übergeben.
		char* rest;
		InputValue = std::strtod(argv[1],&rest);
		if (*rest||*rest=='\n') {
			std::cout << "Eingabe fehlerhaft. Nur Fließkomma erlaubt, Aufruf über:  "<<std::endl 
					  << argv[0] << " 322.29" <<std::endl;
			return -1;
		}
	}

	std::cout << milesToKilometer(InputValue);

	// Einheit wird in Komandozeilen Variante nicht mit ausgegeben. Nur Interaktiv.
	(argc!=2) ? std::cout << " km." << std::endl : std::cout << std::endl;

	return 0;
}