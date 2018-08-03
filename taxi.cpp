// Chapter 9 of C++ How to Program
// taxi.cpp
#include "taxi.h" //includes the taxi header 
// constructor
Taxi::Taxi(double f):Vehicle(4, 6, "yellow", f, 5) //constructor that takes in a double value that sends that value to the vehicle class 
{
 customers = false; //customer  value is pre set 
 setClassName("Taxi"); //class name is set 
} // end class Taxi constructor

  /* Write definition for setCustomers */
void Taxi::setCustomers(bool a) //sets the input to the private bool value, customer
{
 customers = a;
}

bool Taxi::hasCustomers() //getter method for customer returns the customer 
{
 return customers;
}
/* Write definition for hasCustomers */

// function operator<< definition
ostream &operator<<(ostream &output, const Taxi &t) //prints out all the values from the vehicle class 
{
 output << t.getClassName() << "\n"
  << "\tNumber of doors: "
  << t.getNumberOfDoors()
  << "\n\tNumber of cylinders: "
  << t.getNumberOfCylinders()
  << "\n\tTransmission type: "
  << t.getTransmissionType()
  << "\n\tColor: " << t.getColor()
  << "\n\tFuel level: "
  << t.getFuelLevel() << "\n";
 if ( t.customers)
  output << "\tThe taxi has customers.\n"; //prints out if the taxi has customers 
 else
  output << "\tThe taxi has no customers.\n"; //prints out if the taxi has no customers 
 return output;
} // end function operator

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
