#include <iostream> // Ein- / Ausgabe
#include <cmath>
int main () {
	std::cout << "Hello, World!" << std::endl;
	std::cout << "Ich rechne jetzt ein wenig... Die Quadratwurzel von 1 bis 30..." << std::endl;

	for (int i=1; i<=30; ++i)
	{
		std::cout << std::sqrt(i);
		(i<30)? std::cout << "; " :  std::cout << std::endl;
	}
	return 0; 

}
