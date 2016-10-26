/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   intArray.cpp
 * Author: homayoun
 * 
 * Created on September 16, 2016, 2:31 PM
 */

#include "intArray.h"

intArray::intArray() {
    size = 0;
    data=NULL;
}

intArray::intArray(int _size) {
    size = _size;
    data = new int [size];
    
    for(int i=0; i < size; i++) {
        data[i] = 0;
        *(data+i) = 0;
//        *(data++) = 0; //This is a really bad idea. Why?
    }
}

intArray::intArray(int _size, int content) {
    size = _size;
    data = new int [size];
    
    for(int i=0; i < size; i++) {
        data[i] = content;
        *(data+i) = content;
//        *(data++) = 0; //This is a really bad idea. Why?
    }
}

intArray::intArray(int _size, int anArray[]) {
    size = _size;
    data = new int [size];
    
    for(int i=0; i < size; i++) {
        data[i] = anArray[i];
        *(data+i) = *(anArray+i);
//        *(data++) = 0; //This is a really bad idea. Why?
    }
}

intArray::intArray(const intArray &rhs) {
    size = rhs.size;
    data = new int [size];
    
    for(int i=0; i < size; i++) {
        data[i] = rhs.data[i];
    }
}

intArray::~intArray() {
    delete [] data;
}

void intArray::Print() const {
    for(int i=0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void intArray::PrintSize() const {
    cout << "size: " << size << endl;
}

void intArray::operator+(int value) {
    int *temp = new int [size+1]; //Make a temporary space
    
    for(int i=0; i < size; i++) {
        temp[i] = data[i]; //Move data to temp
    }
    temp[size] = value; //This is the last element of the temp array that is one longer than data. 
    
    delete [] data; //Release the block that was reserved for data (not needed anymore). 
    size++; //Increase size by 1.
    data = temp; //Point the current data pointer to what temp is pointing to. 
}

void intArray::operator +(intArray &rhs) {
    int *temp = new int [size + rhs.size];
    
    for(int i=0; i < size; i++) {
        temp[i] = data[i];
    }
    for(int i=0; i < rhs.size; i++) {
        temp[size+i] = rhs[i];
    }
    delete [] data;
    data = temp;
    size += rhs.size;
}

bool intArray::operator==(const intArray &rhs) const {
    bool returnValue = true;
    if(size != rhs.size) {
        returnValue = false;
    }else {
        for(int i=0; i < size; i++) {
            if(data[i] != rhs.data[i]){
                returnValue = false;
            }
        }
    }
    return returnValue;
}

    void operator=(const intArray &rhs){
        delete [] data;
        data = new int [rhs.size];
        for(int i=0; i < size; i++) {
            data[i] = rhs[i];
        }
    }

int intArray::operator [](int index) const {
    if((index >= 0) && (index < size)) {
        return data[index];
    } else {
        exit(0); //Simplest exception handling for now. May change later. 
    }
}