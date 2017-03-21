//
//  ListBig3.cpp
//  LAB 02 16 2017 Big 3 and Operator Overloading
//
//  Created by ax on 3/20/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

/*** Implementations ***/
#include "ListBig3_H.h"
#include <iostream>
using namespace std;

List::List() {
    dataList = new int[10];
    length = 0;
    capacity = 10;
}

List::List(int p_cap) {
    dataList = new int[p_cap];
    length = 0;
    capacity = p_cap;
}

// OVERLOADED COPY CONSTRUCTOR!
List::List(const List& p_obj) {
    cout << "Overloaded copy constructor invoked\n";
    // Allocate separate memory for data list
    this->dataList = new int[p_obj.capacity];
    // Copy over attriutes of p_obj
    this->capacity = p_obj.capacity;
    this->length = p_obj.length;
    for (int i = 0; i < length; i++) {
        this->dataList[i] = p_obj.dataList[i];
    }
}

void List::addItem(int newItem) {
    if (length != capacity)
    {
        dataList[length] = newItem;
        length++;
    }
}

void List::printList() {
    for (int i = 0; i < length; i++)
        cout << dataList[i] << ' ';
}

void List::decrementAll() {
    for (int i = 0; i < length; i++)
        dataList[i]--;
}

// OVERLOADED ASSIGNMENT OPERATOR
List& List::operator= (const List& p_obj) {
	//Allocate separate memory
    dataList = new int[p_obj.capacity];
	//Copy over attriutes of p_obj
    this->capacity = p_obj.capacity;
    this->length = p_obj.length;
    
    for (int i = 0; i < length; i++) {
        this->dataList[i] = p_obj.dataList[i];
    }
    
    return *this;
}

// OVERLOADED DESTROY
//List::~List()
//{
//	//Deallocate dynamic array
//}

