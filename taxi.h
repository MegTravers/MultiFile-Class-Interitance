/*Meaghan Travers
	17194326
	1/8/2018*/
// taxi.h
#ifndef TAXI_H
#define TAXI_H
#include <iostream>

#include "Vehicle.h" //includes the vehicle header from the vehicle class 


// class Taxi definition
class Taxi : public Vehicle { //inherites the attributed of the Vehicle class 
	 friend ostream& operator<<(ostream &, const Taxi &);
	public:
	 Taxi(double); //constructor that takes in a double parameter 
	 void setCustomers(bool); //setter method that takes in one parameter that is a boolean value 
	 bool hasCustomers(); //getter method that returns the boolean value 
	private:
	 bool customers; //customer is type boolean and it is private 
}; // end class Taxi
#endif // TAXI_H

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
