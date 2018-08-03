/*Meaghan Travers
	17194326
	1/8/2018*/

#include "truck.h" //include truck class 

/* Write definition for class Truck's constructor */
Truck::Truck(double w): Vehicle(2, 16, "black", w, 8) 
{
 cargo = true; //cargo value set 
 setClassName("Truck"); //name of class set 
} 
// function hasCargo definition

bool Truck::hasCargo()const //returns the bool value from cargo setter method 
{
	return cargo;
} 
// end function hasCargo

  // function setCargo definitionargo;
void Truck::setCargo(bool c) //sets the bool value c to the private value cargo 
{
 cargo = c;
} // end function setCargo

  // function operator<< definition
ostream &operator<<(ostream &output, const Truck &t) //prints function that displays desired value 
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
	  
	 if (t.cargo)
	  output << "\tThe truck is currently carrying cargo.\n"; //prints out if truck has cargo 
	 else
	  output << "\tThe truck is not carrying cargo.\n"; //prints out if truck does not have cargo 
 return output;
} // end function operator<<
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

