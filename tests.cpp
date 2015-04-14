#define CATCH_CONFIG_RUNNER
#include "../Catch-master/include/catch.hpp"
// single include auch möglich... 
// https://raw.githubusercontent.com/philsquared/Catch/develop/single_include/catch.hpp

// #include <cmath>
#include <iostream>
#include <string>
#include "utility.hpp"


TEST_CASE("factorial", "[factorial]")
{
	REQUIRE(factorial(0) == 1);
	REQUIRE(factorial(4) == 24);
}

TEST_CASE("checksum", "[checksum]")
{
	REQUIRE(checksum(300) == 3);
	REQUIRE(checksum(3492884) == 38);
	REQUIRE(checksum(-3492884) == 38);
}

TEST_CASE("fract", "[fract]")
{
	REQUIRE(fract(39.1234) == Approx(0.1234));
	REQUIRE(fract(-39.1234) == Approx(0.1234));
	REQUIRE(fract(0.00012) == Approx(0.00012));
	REQUIRE(fract(-1.000000001) == Approx(0.000000001));
	REQUIRE(fract(9999) == Approx(0.0));
}

TEST_CASE("is_prime","[is_prime]")
{
	REQUIRE(is_prime(1451)==true);
	REQUIRE(is_prime(1452)==false);
	REQUIRE(is_prime(1)==true);
	REQUIRE(is_prime(-1)==false);
	REQUIRE(is_prime(221201)==true);
	REQUIRE(is_prime(221203)==true);
	REQUIRE(is_prime(221205)==false);
}

TEST_CASE("capacity_of_cylinder","[cylinder_capacity]")
{
	REQUIRE(cylinder_capacity(1,1)==Approx(3.14159));
	REQUIRE(cylinder_capacity(2,0.5)== Approx(1.5708));
	REQUIRE(cylinder_capacity(300,10)==Approx(94247.7800099999));
	REQUIRE(cylinder_capacity(-300,10)==Approx(94247.7800099999));
}

TEST_CASE("area_of_cylinder","[cylinder_area]")
{
	REQUIRE(cylinder_area(1,1)==Approx(12.5664));
}

TEST_CASE("miles_to_kilometer_converter","[milesToKilometer]")
{
	REQUIRE(milesToKilometer(300)==Approx(482.8));
}

TEST_CASE("sort_integers","[sortIntegers]")
{
	REQUIRE(sortIntegers(3,2,1)=="1 < 2 < 3");
	REQUIRE(sortIntegers(1,1,1)=="1 < 1 < 1");
	REQUIRE(sortIntegers(99,188,2)=="2 < 99 < 188");
	REQUIRE(sortIntegers(0,1,0)=="0 < 0 < 1");
	// int a = 99;
	// int b = 1;
	// int c = 9;
	// sortIntegers(a,b,c);
	// REQUIRE(a==1);
	// REQUIRE(b==9);
	// REQUIRE(c==99);
}


int main (int argc, char* argv[])
{ 	// Tests ausführen.
	return Catch::Session().run(argc,argv);
}