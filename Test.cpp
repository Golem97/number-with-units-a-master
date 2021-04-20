/*
===============================================================
>Submission 3.1 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>number-with-units-a
================================================================
*/

#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <iostream>
#include <ctime>
#include <stdexcept>
#include <string>
using namespace ariel;
using namespace std;

ifstream units_file{"units.txt"};
// 1 km = 1000 m
// 1 m = 100 cm     
// 1 kg = 1000 g
// 1 ton = 1000 kg
// 1 hour = 60 min
// 1 min = 60 sec
// 1 USD = 3.33 ILS

	//Distances:
	NumberWithUnits u_cm  (2, "cm");
	NumberWithUnits u_m   (2, "m");
	NumberWithUnits u_km  (2, "m");
	
	//Weight:
	NumberWithUnits u_g   (2, "g");
	NumberWithUnits u_kg  (2, "kg");
	NumberWithUnits u_ton (2, "ton");
	
	//Times:
	NumberWithUnits u_sec  (3, "sec");
	NumberWithUnits u_min  (3, "min");
	NumberWithUnits u_hour (3, "hour");

	//Changes:
    NumberWithUnits u_USD (1, "USD");
	NumberWithUnits u_ILS  (3.33, "ILS");


TEST_CASE("(+)For Each units")
{

	//Distances	:
	//cm + m
	u_m  = NumberWithUnits  (2, "m");
	u_cm = NumberWithUnits  (2, "cm");
	u_m= u_m+u_cm;
	CHECK(u_m == NumberWithUnits (2.02, "m"));

	//m + cm
	u_m  = NumberWithUnits  (2, "m");
	u_cm = NumberWithUnits  (2, "cm");
	u_cm= u_m+u_cm;
	CHECK(u_cm == NumberWithUnits (202, "cm"));

    //m + km
	u_m  = NumberWithUnits  (2, "m");
	u_km = NumberWithUnits  (2, "km");
	u_m= u_m + u_km;
	CHECK(u_m == NumberWithUnits (2002, "m"));

    //km + m 
    u_m  = NumberWithUnits  (2, "m");
	u_km = NumberWithUnits  (2, "km");
	u_km= u_km+u_m;
    CHECK(u_km == NumberWithUnits (2.002, "km"));


    //Weight:
	//g + kg
	u_g =NumberWithUnits (2, "g");
	u_kg=NumberWithUnits  (2, "kg");
	u_g= u_g+u_kg;
	CHECK(u_g == NumberWithUnits (2002 , "g"));

	//kg + g
	u_g =NumberWithUnits (2, "g");
	u_kg=NumberWithUnits  (2, "kg");
	u_kg= u_g+u_kg;
	CHECK(u_kg == NumberWithUnits (2.002 , "kg"));

    //kg+ton
	u_kg  = NumberWithUnits  (2, "kg");
	u_ton = NumberWithUnits (2, "ton");
	u_kg= u_kg + u_ton;
	CHECK(u_kg == NumberWithUnits (2002, "kg"));

	//ton+kg 
	u_kg  = NumberWithUnits  (2, "kg");
	u_ton = NumberWithUnits (2, "ton");
	u_kg= u_kg + u_ton;
	CHECK(u_ton == NumberWithUnits (2.002, "ton"));

	//Times :
	//min + sec
	u_sec = NumberWithUnits  (3, "sec");
	u_min = NumberWithUnits  (3, "min");
	u_sec= u_min + u_sec;
	CHECK(u_sec == NumberWithUnits (183, "sec"));

	//sec + min
	u_sec = NumberWithUnits  (30, "sec");
	u_min = NumberWithUnits  (3, "min");
	u_min= u_sec + u_min;
	CHECK(u_min == NumberWithUnits (3.5, "min"));

	//min + hour
	u_min  = NumberWithUnits   (3, "min");
	u_hour = NumberWithUnits  (3, "hour");
	u_min= u_min + u_hour;
	CHECK(u_min == NumberWithUnits (183, "min"));

	//hour+min
	u_min  = NumberWithUnits   (30, "min");
	u_hour = NumberWithUnits  (3, "hour");
	u_hour= u_min + u_hour;
	CHECK(u_min == NumberWithUnits (3.5, "hour"));

	//Change
	//USD+ILS
	u_USD =NumberWithUnits  (1, "USD");
	u_ILS =NumberWithUnits   (3.33, "ILS");
	u_USD= u_USD + u_ILS;
	CHECK(u_USD == NumberWithUnits (2, "USD"));

	//ILS + USD
	u_USD =NumberWithUnits  (1, "USD");
	u_ILS =NumberWithUnits   (3.33, "ILS");
	u_ILS= u_USD + u_ILS;
	CHECK(u_USD == NumberWithUnits (6.66, "ILS"));

}

TEST_CASE("(-)For Each units")
{

	//Distances	:
	//cm - m
	u_m= NumberWithUnits  (2.02, "m");
	u_cm=NumberWithUnits  (2, "cm");
	u_m= u_m-u_cm;
	CHECK(u_m == NumberWithUnits (2, "m"));

	//m - cm
	u_m= NumberWithUnits  (2.02, "m");
	u_cm=NumberWithUnits  (2, "cm");
	u_cm= u_m+u_cm;
	CHECK(u_cm == NumberWithUnits (200, "cm"));

    //m - km
	u_m  = NumberWithUnits  (2, "m");
	u_km = NumberWithUnits  (2.002, "km");
	u_m= u_m - u_km;
	CHECK(u_m == NumberWithUnits (2000, "m"));

    //km - m 
	u_m  = NumberWithUnits  (2, "m");
	u_km = NumberWithUnits  (2.002, "km");
	u_km= u_km-u_m;
    CHECK(u_km == NumberWithUnits (2, "km"));


    //Weight:
	//g - kg
	u_g = NumberWithUnits  (2, "g");
	u_kg =NumberWithUnits  (2.002, "kg");
	u_g= u_g-u_kg;
	CHECK(u_g == NumberWithUnits (2000 , "g"));

	//kg - g
    u_g = NumberWithUnits  (2, "g");
	u_kg =NumberWithUnits  (2.002, "kg");
	u_kg= u_g-u_kg;
	CHECK(u_kg == NumberWithUnits (2 , "kg"));

    //kg - ton
	u_kg  =NumberWithUnits  (2, "kg");
	u_ton =NumberWithUnits (2.002, "ton");
	u_kg= u_kg - u_ton;
	CHECK(u_kg == NumberWithUnits (2000, "kg"));

	//ton- kg 
    u_kg  =NumberWithUnits  (2, "kg");
	u_ton =NumberWithUnits (2.002, "ton");
	u_kg= u_kg - u_ton;
	CHECK(u_ton == NumberWithUnits (2, "ton"));

	//Times :
	//min + sec
	u_sec= NumberWithUnits  (30, "sec");
	u_min =NumberWithUnits  (3.5, "min");
	u_sec= u_min - u_sec;
	CHECK(u_sec == NumberWithUnits (180, "sec"));

	//sec + min
    u_sec= NumberWithUnits  (30, "sec");
	u_min =NumberWithUnits  (3.5, "min");
	u_min= u_sec - u_min;
	CHECK(u_min == NumberWithUnits (3, "min"));

	//min - hour
	u_min = NumberWithUnits (30, "min");
	u_hour =NumberWithUnits  (3.5, "hour");
	u_min= u_min - u_hour;
	CHECK(u_min == NumberWithUnits (180, "min"));

	//hour - min
	u_min = NumberWithUnits (30, "min");
	u_hour =NumberWithUnits  (3.5, "hour");
	u_hour= u_min - u_hour;
	CHECK(u_min == NumberWithUnits (3, "hour"));

	//Change
	//USD - ILS
	u_USD = NumberWithUnits (1, "USD");
	u_ILS = NumberWithUnits  (3.33, "ILS");
	u_USD= u_USD - u_ILS;
	CHECK(u_USD == NumberWithUnits (0, "USD"));

	//ILS - USD
	u_USD = NumberWithUnits (1, "USD");
	u_ILS = NumberWithUnits  (3.33, "ILS");
	u_ILS= u_USD - u_ILS;
	CHECK(u_USD == NumberWithUnits (0, "ILS"));

}
TEST_CASE("(*)For Each units")
{
	//Distances:
	u_m = NumberWithUnits  (2, "m");
	u_m*2;
    CHECK(u_m == NumberWithUnits (4, "m"));
    2*u_m;
    CHECK(u_m == NumberWithUnits (8, "m"));
    
    //Weight:
    u_g = NumberWithUnits  (2, "g");
	u_g*2;
    CHECK(u_g == NumberWithUnits (4, "g"));
    2*u_g;
    CHECK(u_g == NumberWithUnits (8, "g"));

    //Times:
    u_min = NumberWithUnits  (2, "min");
	u_min*2;
    CHECK(u_min == NumberWithUnits (4, "min"));
    2*u_min ;
    CHECK(u_min == NumberWithUnits (8, "min"));

	//Changes:
    u_USD = NumberWithUnits  (2, "USD");
	u_USD*2;
    CHECK(u_USD == NumberWithUnits (4, "USD"));
    2*u_USD ;
    CHECK(u_USD == NumberWithUnits (8, "USD"));
}


TEST_CASE("(+=)(-=)(*=)")
{

	//Distances:
	//(+=)
	u_km = NumberWithUnits  (2, "km");
	u_m = NumberWithUnits  (2, "m");
	u_km+=u_m;
    CHECK(u_km == NumberWithUnits (2.002, "km"));
    
    //(-=)
    u_km = NumberWithUnits  (2.002, "km");
	u_m =NumberWithUnits  (2, "m");
    u_km-=u_m;
    CHECK(u_km == NumberWithUnits (2, "km"));
     
    //(*=)
    u_km = NumberWithUnits (2, "km");
	u_km*=2;
    CHECK(u_km == NumberWithUnits (4, "km"));

    //Weight:
	//(+=)
	u_kg = NumberWithUnits  (2, "kg");
	u_g = NumberWithUnits  (2,  "g");
	u_kg+=u_g;
    CHECK(u_kg == NumberWithUnits (2.002, "kg"));
    
    //(-=)
    u_km = NumberWithUnits  (2.002, "kg");
	u_cm = NumberWithUnits  (2, "g");
    u_kg-=u_g;
    CHECK(u_kg == NumberWithUnits (2, "kg"));

     //(*=)
    u_kg = NumberWithUnits  (2, "kg");
	u_kg*=2;
    CHECK(u_kg == NumberWithUnits (4, "kg"));


   	//Times:
	//(+=)
	u_hour = NumberWithUnits  (2, "hour");
	u_min = NumberWithUnits  (30,  "min");
	u_hour+=u_min;
    CHECK(u_hour == NumberWithUnits (2.5, "hour"));
    //(-=)
	u_hour = NumberWithUnits  (2.5, "hour");
	u_min = NumberWithUnits  (30,  "min");
	u_hour-=u_min;
    CHECK(u_hour == NumberWithUnits (2, "hour"));
	//(*=)
    u_min = NumberWithUnits   (2, "min");
    u_min*=2;
    CHECK(u_kg == NumberWithUnits (4, "min"));


	//Changes:
	//(+=)
	u_USD  = NumberWithUnits (2, "USD");
	u_ILS = NumberWithUnits  (3.33,  "ILS");
	u_USD+=u_ILS;
    CHECK(u_USD == NumberWithUnits (3, "USD"));
 	//(-=)
	u_USD = NumberWithUnits  (2, "USD");
	u_ILS = NumberWithUnits  (3.33,  "ILS");
	u_USD-=u_ILS;
    CHECK(u_USD == NumberWithUnits (1, "USD"));

    //(*=)
    u_USD = NumberWithUnits  (2, "USD");
    u_USD*=2;
    CHECK(u_USD == NumberWithUnits (4, "USD"));

}


TEST_CASE("(++)(--)")
{
	//Distances:
	//(++)
	u_km = NumberWithUnits  (2, "km");
	u_km++;
    CHECK(u_km == NumberWithUnits (3, "km"));
    //(--)
    u_km--;
    CHECK(u_km == NumberWithUnits (2, "km"));

    //Weight:
	//(++)
	u_kg = NumberWithUnits  (2, "km");
	u_kg++;
    CHECK(u_kg == NumberWithUnits (3, "kg"));
    //(--)
    u_kg--;
    CHECK(u_kg == NumberWithUnits (2, "kg"));

    //Times:
	//(++)
	u_hour = NumberWithUnits  (2, "hour");
	u_hour++;
    CHECK(u_hour == NumberWithUnits (3, "hour"));
    //(--)
    u_hour--;
    CHECK(u_hour == NumberWithUnits (2, "hour"));
    
    //Times:
	//(++)
	u_USD = NumberWithUnits (2, "USD");
	u_USD++;
    CHECK(u_USD == NumberWithUnits (3, "USD"));
    //(--)
    u_hour--;
    CHECK(u_USD == NumberWithUnits (2, "USD"));
}




