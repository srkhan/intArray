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
#include <cstdlib>
using namespace std;

class intArray {
public:
    intArray();
    intArray(int _size);
    intArray(int _size, int content);
    intArray(int _size, int anArray[]);
    intArray(const intArray &);
    ~intArray();
    
    void Print() const;
    void operator+(int);
    void operator+(intArray &);
    bool operator==(const intArray &) const;
    int  operator[](int) const;
    void PrintSize() const;
    
    
private:
    int size;
    int *data;

};

#endif /* INTARRAY_H */

