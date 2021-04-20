/*
===============================================================
>Submission 3.1 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>number-with-units-a
================================================================
*/

#include <iostream>
#include <fstream>
#include <map>
#include "NumberWithUnits.hpp"
using namespace std;


static  map< std::string, map<std:: string, double>> units_map; 

namespace ariel {

	//Map Signature
    std::map<string,std::map<string,double>> units;        
    //Constructor       
    NumberWithUnits n(0,"0");

/*
    ==================
    METHODS SIGNATURES 
    ==================     
*/
 //READ TXT FILE SIGNATURE
 void  NumberWithUnits::read_units(ifstream& file)
             {
   
             }
 //COMP SIGNATURE    
 int comp(const NumberWithUnits& number1, const NumberWithUnits& number2){
                 return 0;
             }


    //Just Signatures of The Operators to make work the tests :
    /*
    =====================
    ARITHMETICS OPERATORS 
    =====================     
    */
   
    //Addition (+) 
    NumberWithUnits& operator+(const NumberWithUnits& v1, const NumberWithUnits& v2){
        return n;}

    NumberWithUnits& operator+(const NumberWithUnits& v1){
                 return n;
             }
    NumberWithUnits& operator+=(NumberWithUnits& v1, const NumberWithUnits& v2){
                 return v1;
             }         

    //Soustraction (-)             
    NumberWithUnits& operator-(const NumberWithUnits& v1, const NumberWithUnits& v2){
                 return n;
             }

    NumberWithUnits& operator-(const NumberWithUnits& v1){
                 return n;
             }
    NumberWithUnits& operator-=(NumberWithUnits& v1, const NumberWithUnits& v2){
                 return v1;
             }
    
    //Multiply (*)
    NumberWithUnits& operator*( NumberWithUnits& v2 ,double v1){
                 return n;
             }
    NumberWithUnits& operator*(double v1,  NumberWithUnits& v2){
                 return n;
             }
    NumberWithUnits& operator*=( NumberWithUnits& v2, double v1){
                 return n;
             }
   
    NumberWithUnits& operator*=( double v1,NumberWithUnits& v2){
                 return n;
             }  
    

    
   
           
    /*
    =====================================
    INCREMENTING / DECREMENTING OPERATORS 
    =====================================     
    */
   
    //INCREMENTING (++)        
    NumberWithUnits& operator++( NumberWithUnits& v1){
                 return n;
             }
    NumberWithUnits& operator++( NumberWithUnits& v1, int){
                 return n;
             }      
    
    //DECREMENTING (--)
    NumberWithUnits& operator--( NumberWithUnits& v1, int){
                 return n;
             } 
    NumberWithUnits& operator--( NumberWithUnits& v1){
                 return n;
             }    


    //INPUT OUTPUT OPERATORS 

    std::istream& operator>> (std::istream& input , NumberWithUnits& c){
                 return input;
             }  
    std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c){
                 return output;
             }


    //COMPARAISON OPERATORS
    //(>)         
    bool operator>(const NumberWithUnits& v1, const NumberWithUnits& v2){
                 return true;
             }
    //(<)
    bool operator<(const NumberWithUnits& v1, const NumberWithUnits& v2){
                 return true;
             }
    //(>=)         
    bool operator>=(const NumberWithUnits& v1, const NumberWithUnits& v2){
                 return true;
             }
    //(<=)                       
    bool operator<=(const NumberWithUnits& v1, const NumberWithUnits& v2){
                 return true;
             }
    //(==)
    bool operator==(const NumberWithUnits& v1, const NumberWithUnits& v2){
                 return true;
             }
    //(!=)
    bool operator!=(const NumberWithUnits& v1, const NumberWithUnits& v2){
                 return true;
             }
    
}
