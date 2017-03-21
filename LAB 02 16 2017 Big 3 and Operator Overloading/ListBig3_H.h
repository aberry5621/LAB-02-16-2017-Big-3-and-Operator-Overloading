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
    /*List(const List&);*/
    
    void addItem(int newItem);
    void printList();
    void decrementAll();
    
    /*List& operator= (const List&);*/
    /*~List();*/
private:
    int * dataList;
    int length;
    int capacity;
};

#endif /* ListBig3_H_h */
