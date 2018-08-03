// Chapter 9 of C++ How to Program
// vehicle.cpp
#include <iostream>
#include "Vehicle.h" //includes vehicle header class 
using std::cout;
using std::endl;

// constructor
Vehicle::Vehicle( int doors,  int cylinders, string color, double initialFuel,  int transmission)
{ 							//constructor that takes 5 parameters and sets them to the private variables on the vehicle class
 numberOfDoors = doors;
 numberOfCylinders = cylinders;
 vehicleColor = color;
 fuelLevel = initialFuel;
 transmissionType = transmission;
}
// end class Vehicle constructor

// function operator<< definition
ostream &operator<<(ostream &out, const Vehicle &v) //print function to display the values of the classes 
{
 out << v.className << "\n"
  << "\tNumber of doors: " << v.numberOfDoors
  << "\n\tNumber of cylinders: " << v.numberOfCylinders
  << "\n\tTransmission type: " << v.transmissionType
  << "\n\tColor: " << v.vehicleColor
  << "\n\tFuel level: " << v.fuelLevel << endl;
 return out;
} // end function operator<<

void Vehicle::setColor(string x) //sets the varibale x to the private variable vehicleColor 
{
 vehicleColor = x;
}
// function setFuelLevel definition

void Vehicle::setFuelLevel(double amount) //sets the fuel level 
{
 // assume 20 gallons is full tank
 if (amount > 0.0 && amount <= 20.0)
  fuelLevel = amount;
 else
  fuelLevel = 5.0;
} // end function setFuelLevel

  // return color
string Vehicle::getColor() const //returns the vehicle color 
{
	return vehicleColor;
} // end function getColor
  // return fuelLevel
double Vehicle::getFuelLevel() const //returns the fuel lever value 
{
	return fuelLevel;
} // end function getFuelLevel
  // return transmissionType
int Vehicle::getTransmissionType() const //return the number of transmissions 
{
	return transmissionType;
} // end function getTransmissionType

  // return numberOfDoors
int Vehicle::getNumberOfDoors() const //returns the number of doors 
{
	return numberOfDoors;
} // end function getNumberOfDoors

  // return numberOfCylinders
int Vehicle::getNumberOfCylinders() const //returns the number of cylinders 
{
	return numberOfCylinders;
} // end function getNumberOfCylinders

  // function setClassName definition
void Vehicle::setClassName(string newName) //sets the newName variable to the private variable, className 
{
	className = newName;
} // end function setClassName

  // return className
string Vehicle::getClassName() const //returns the class name 
{
	return className;
} // end function getClassName

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

