#include <iostream>
using std::cout;
using std::endl;
//Includes all header fils from the different classes 
#include "Vehicle.h"
#include "taxi.h"
#include "truck.h"

int main()
{
 Vehicle car(2, 6, "blue", 14.6, 3); //sets vehicle values to its desired values 
 Taxi cab(3.3); //uses taxi constructor to set fuel level to 3.3 
 Truck mack(7.54); //uses truck constructor and sets fuel level to 7.54
 mack.setCargo(1); //sets cargo to bool value 1 
 cout << "Vehicle" << "\n";
 cout << car; //prints out the car information 
 cout << " " << "\n";
 cout << cab; //prints out the taxi information 
 cout << " " << "\n";
 cout<< mack; //prints out the truck information 
 mack.setColor("Red"); //sets vehicle color to red 
 cout << "New Color is: "<<mack.getColor()<<"\n"; //prints out new color 
 mack.setFuelLevel(4.9); //sets fuel level to 4.9
 cout <<"New Fuel Level is: "<<mack.getFuelLevel() << "\n"; //prints out fuel level 
 return 0;
} // end main
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
