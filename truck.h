/*Meaghan Travers
	17194326
	1/8/2018*/
// truck.h
#include <iostream>

#include <string>

#include "Vehicle.h" //includes the vehicle header 

class Truck: public Vehicle //inherites the vehicke class attributes 
{
 friend ostream& operator<<(ostream &, const Truck &); //printer method 
 
	private:
	 bool cargo; //cargo is set to private and is of bool type 
	public:
	 Truck(double); //constructor that takes in one parameters of type double 
	 bool hasCargo()const; //getter method for the cargo that returnd the bool value 
	 void setCargo(bool); //setter value for the cargo and takes in one parameter 

};
/**************************************************************************
* (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice  	*
* Hall. All Rights Reserved.                                         	*
*                                                                    	*
* DISCLAIMER: The authors and publisher of this book have used their 	*
* best efforts in preparing the book. These efforts include the      	*
* development, research, and testing of the theories and programs    	*
* to determine their effectiveness. The authors and publisher make   	*
* no warranty of any kind, expressed or implied, with regard to these	*
* programs or to the documentation contained in these books. The authors *
* and publisher shall not be liable in any event for incidental or   	*
* consequential damages in connection with, or arising out of, the   	*
* furnishing, performance, or use of these programs.                 	*
*************************************************************************/
