/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   intArray.h
 * Author: homayoun
 *
 * Created on September 16, 2016, 2:31 PM
 */

#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>
using namespace std;

class intArray {
public:
    intArray();
    intArray(int _size);
    intArray(int _size, int content);
    
//    void Print();
//    void Add(int);
//    void PrintSize();
    
    
private:
    int size = 0;
    int *data;

};

#endif /* INTARRAY_H */

