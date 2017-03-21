//
//  ListBig3_H.h
//  LAB 02 16 2017 Big 3 and Operator Overloading
//
//  Created by ax on 3/20/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#ifndef ListBig3_H_h
#define ListBig3_H_h

class List
{
public:
    List();
    List(int);
    
    // OVERLOADED COPY CONSTRUCTOR
    List(const List&);
    
    void addItem(int newItem);
    void printList();
    void decrementAll();
    
    // OVERLOADED ASSIGNMENT OPERATOR
    List& operator= (const List&);
    
    // OVERLOADED DESTROY
    ~List();

private:
    int * dataList;
    int length;
    int capacity;
};

#endif /* ListBig3_H_h */
