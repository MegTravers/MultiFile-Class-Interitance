//#pragma once
// Chapter 9 of C++ How to Program
// vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using std::ostream;
#include <string>
using std::string;

/*Meaghan Travers
	17194326
	1/8/2018*/

// class Vehicle definition
class Vehicle {
	 friend ostream& operator<<(ostream &, const Vehicle &);
	public:
	 Vehicle(const int, const int, string, const double, const int);
	 
	 void setColor(string); //setter method for the color that takes in one parameter
	 string getColor() const; // getter method for color that returns the color name 
	 
	 void setFuelLevel(double); //setter method for the fuel level 
	 double getFuelLevel() const; //getter method for the fuel level 
	 
	 void setClassName(string); //setter method for the class name that returns the name 
	 string getClassName() const; //getter method for the string class name 
	 
	 int getTransmissionType() const; //getter method for the transmission type 
	 int getNumberOfDoors() const; //getter method for the number of doors 
	 int getNumberOfCylinders() const; //getter method for the number of cylinders 
	private:
	 int numberOfDoors; //variable for number of doors 
	 int numberOfCylinders; //variable for number if cylinders
	 string vehicleColor; //string for the vehicle color
	 double fuelLevel; //value for fuel level in double 
	 int transmissionType; //variable for the transmission type
	 string className; //string for name of the class
}; // end class Vehicle
#endif // VEHICLE_H

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
