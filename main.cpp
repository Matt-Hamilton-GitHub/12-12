


//                                            ********* Writer: Matt Hamilton      *********
 //                                             ******** Class: CS 136             ******** 
 //                                              ******* Professor: Brian Dauzat   *******
 //                                                ***** Exercise 12-12            *****
 //                                                 **** ========================= ****
 //                                                   **  *** *** *** *** *** *** **

//A set is a collection of distinct element of the same type. Design the class unorderedSetType, 
//derived from the unorderedArrayListType, to manipulate sets. Note that you need to redefine only 
//the functions insertAt, insertEnd, and replaceAt. If the item to be inserted is already in the list, 
//the  functions insertAt and insertEnd output an appropriate message. Similarly, if the item to be 
//replaced is already in the list, 
//the function replaceAt outputs and appropriate message. Also, write a program to test your class.

#include <iostream>
#include <list>
#include <set>

using namespace std;

#include "unorderedSetType.h"

int main()

{
	
   unorderedSetType set(5);
 
   set.insertAt(0,1);
   set.insertAt(1,2);
   set.insertAt(2,3);
   set.insertAt(3,4);
   set.insertAt(4,5);
   
   cout<<"Elements in set:";
   set.print();
   set.insertAt(2,2);
   set.replaceAt(0,14);
   set.print();
	
	system("pause");
	return 0;
}
