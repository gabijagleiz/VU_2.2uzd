#include "funkcijos.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

//only for testing

bool Islaike (double vidurkis)
{
    if (vidurkis>=5)
        return true;
    else return false;
}
bool Neislaike (double vidurkis)
{
    if (vidurkis<5)
        return true;
    else return false;
}

double Galutinis (double vidurkis, int egz)
{
    return 0.4*vidurkis+0.6*egz;
}

 TEST_CASE("Galutinis rezultatas") {

	REQUIRE(Galutinis(5.1, 7) == 6.24);
	REQUIRE(Galutinis(4.1, 10) == 7.64);
	REQUIRE(Galutinis(9.2, 4) == 6.08);
	REQUIRE(Galutinis(8.5, 9) == 8.8);
	REQUIRE(Galutinis(8.5, 3) == 5.2);

}

TEST_CASE("Ar studentas islaike") {

	REQUIRE(Islaike(9) == true);
	REQUIRE(Islaike(4) == false);
	REQUIRE(Islaike(10) == true);
	REQUIRE(Islaike(7) == true);
	REQUIRE(Islaike(5) == true);

}
TEST_CASE("Ar studentas neislaike") {

	REQUIRE(Neislaike(7) == false);
    REQUIRE(Neislaike(5) == false);
	REQUIRE(Neislaike(4) == true);
	REQUIRE(Neislaike(1) == true);
	REQUIRE(Neislaike(3) == true);

}