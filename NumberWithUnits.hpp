/*
===============================================================
>Submission 3.1 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>number-with-units-a
================================================================
*/
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <sstream>

using namespace std;

namespace ariel {
      class NumberWithUnits{
       
       private:
        //Private Value 
            double number;
            string unity;
    public:
        //Constructor
        NumberWithUnits(double n, string u){
           number = n;
           unity = u;
        }
        
        //Read the Text File 
        static void read_units(ifstream& units_file);
      
        //Comparaision Operators :
        friend int comp (const NumberWithUnits& v1, const NumberWithUnits& v2);
        


        //Operators Overloaded :
        
        //Arithmetics:

        //NumberWithUnity and NumberWithUnity
        //(+)
        friend NumberWithUnits& operator+(const NumberWithUnits& v1, const NumberWithUnits& v2);
        //(-)
        friend NumberWithUnits& operator-(const NumberWithUnits& v1, const NumberWithUnits& v2);
        //(*)
        friend NumberWithUnits& operator*(const NumberWithUnits& v1, const NumberWithUnits& v2);
         
        //NumberWithUnity and Number
        //(+)
        friend NumberWithUnits& operator+(const NumberWithUnits& v1);
        //(-)
        friend NumberWithUnits& operator-(const NumberWithUnits& v1);
        //(*)
        friend NumberWithUnits& operator*( NumberWithUnits& v1, double n);
        friend NumberWithUnits& operator*(double n, NumberWithUnits& v1);

        //(+=)
        friend NumberWithUnits& operator+=( NumberWithUnits& v1, const NumberWithUnits& v2);
        //(-=)
        friend NumberWithUnits& operator-=( NumberWithUnits& v1, const NumberWithUnits& v2);
        //(*=)
        friend NumberWithUnits& operator*=( NumberWithUnits& v1, double n);
        friend NumberWithUnits& operator*=( double n , NumberWithUnits& v1);
 
        //(==)
        friend bool operator==(const NumberWithUnits& v1, const NumberWithUnits& v2);
        //(>)
        friend bool operator>(const NumberWithUnits& v1,  const NumberWithUnits& v2);
        //(<)
        friend bool operator<(const NumberWithUnits& v1,  const NumberWithUnits& v2);
        //(>=)
        friend bool operator>=(const NumberWithUnits& v1, const NumberWithUnits& v2);
        //(<==)
        friend bool operator<=(const NumberWithUnits& v1, const NumberWithUnits& v2);
        //(!=)
        friend bool operator!=(const NumberWithUnits& v1, const NumberWithUnits& v2);    

        //Incremantation Operators :

        //(++)
        friend  NumberWithUnits& operator++( NumberWithUnits& v1);
        friend  NumberWithUnits& operator++( NumberWithUnits& v1, int);          
           
        //(--)
        friend  NumberWithUnits& operator--( NumberWithUnits& v1);
        friend  NumberWithUnits& operator--( NumberWithUnits& v1, int);  


        //Inputs and Outputs
        //(<<)
        friend ostream& operator<<(ostream& out, const NumberWithUnits& c);
        //(>>)
        friend istream& operator>>(istream& in, NumberWithUnits& c);
        
    
      };
}
