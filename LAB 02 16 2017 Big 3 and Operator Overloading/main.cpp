//
//  main.cpp
//  LAB 02 16 2017 Big 3 and Operator Overloading
//
//  Created by ax on 3/20/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

/*
 Implement List class so that each member has its own data
 
 create object one, assign list values to its dataList member
 create object two, use object constructor, obj2(obj1)
 create object three, use assignment operator obj3 = obj2
 
 A - Assignment
 C - Copy
 D - Destroy
*/

/*** Driver ***/
#include "ListBig3_H.h"
#include <iostream>
using namespace std;

int main()
{
    List obj1(5);
    obj1.addItem(33);
    obj1.addItem(23);
    obj1.addItem(93);
    obj1.addItem(43);
    obj1.addItem(83);
    
    List obj2(obj1);
    obj1.decrementAll();
    
    List obj3;
    obj3 = obj2;
    obj1.decrementAll();
    obj2.decrementAll();
    
    cout << "Object 1:\t";
    obj1.printList();
    cout << endl;
    cout << "Object 2:\t";
    obj2.printList();
    cout << endl;
    cout << "Object 3:\t";
    obj3.printList();
    
    cout << endl;
    return 0;
}
