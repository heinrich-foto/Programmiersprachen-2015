#include <cmath>
#include <iostream>
#include <string>
#include "utility.hpp"

unsigned factorial (unsigned n)
// Implementierung Itterativ
{ 
	int Ausgabe = 1;
	if (n == 0)
	{
		return 1;
	}
	for (int i = 1; i <= n; ++i)
	{
		Ausgabe = Ausgabe * i;
	}
	return Ausgabe;
}

unsigned int checksum(unsigned int Zahl) 
// Berechnung der Quersumme einer ganzen Zahl.
{
	// Zur Basis 10.
	unsigned int sum = 0;
    while (Zahl > 0) {    // solange die Zahl noch größer 0 ist,
        sum += Zahl % 10; // muss die Zahl um eine Stelle 
        				  // (Basis 10) verringert werden
        Zahl /= 10;		  // und dieser Teil aufsummiert.
    }
    return sum;
}

bool is_prime (unsigned int Zahl)
// Überprüft die Eingegebene Zahl darauf, ob es 
// sich um eine Primzahl handelt.
{
	if (Zahl == 1 || Zahl == 2)
	{ // 1 und 2 sind Primzahlen.
		return true;
	}
	if ( Zahl%2 == 0 || Zahl <= 0)
	{ // nicht prim, wenn durch 2 teilbar
		// (oder kleiner = als 0)
		return false; 
	}
	else {
		// eigentlicher Algorithmus
		// betrachtet alle zahlen zwischen 2 und 
		// der Wurzel der eingegeben Zahl (größter echter Teiler)
		// ob es einen Teiler gibt.
		for (int i = 3; i < sqrt(Zahl) ; ++i)
		{
			if (Zahl % i == 0)
			{ // Wenn teiler gefunden wurde, ist es 
				// keine Primzahl.
				return false;
			}
		}
	}
	// wenn Algorithmus durchläuft, dann
	// ist die Zahl Prim. (gibt wahr zurück)
	return true;
}

double fract(double Zahl) 
// Berechnung des Nachkommaanteils einer Gleitkommazahl
{   // floor rundet Zahl nach unten. (Ganzzahl)
	// fabs ist (floating) Betrag.
  	return fabs(Zahl) - floor(fabs(Zahl)); 
}

double cylinder_capacity(double height, double radius)
// Berechnet Volumen eines Zylinders
{
	return circle_area(fabs(radius)) * fabs(height);
}

double circle_area(double radius)
// Berechnet Fläche eines Kreises
{
	return M_PI * pow(fabs(radius),2);
}

double cylinder_area(double radius, double height)
// Berechnet Fläches eines Zylinders
{
	return 2*M_PI * fabs(radius) * height + 2*circle_area(fabs(radius));
}

double milesToKilometer (double miles)
// Konvertiert Meilen in Kilometer 
{ 
	return fabs(miles) * 1.609344;
}