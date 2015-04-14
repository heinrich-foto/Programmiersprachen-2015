#ifndef UTILITY_HPP
#define UTILITY_HPP

unsigned factorial (unsigned n); // equivalent zu unsigned int 
// (es gibt aber auch vorzeichenlose Typen von char, short, int, long, etc.)
unsigned int checksum(unsigned int Zahl); 					// Aufgabe 1.8
bool is_prime (unsigned int Zahl);							// Aufgabe 1.9
double fract(double Zahl);									// Aufgabe 1.10

double circle_area(double radius);
double cylinder_capacity(double height, double radius);		// Aufgabe 1.11
double cylinder_area(double radius, double height);


double milesToKilometer (double miles);						// Aufgabe 1.12

#endif //define