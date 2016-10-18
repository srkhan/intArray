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

void intArray::Print(){
    for(int i=0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void intArray::Add(int value){
    if(size < max_size) {
        data[size++] = value;
        //Note that in the above line, ++size would not have worked. 
    }
}

void intArray::PrintSize(){
    cout << "max_size: " << max_size << endl;
    cout << "size: " << size << endl;
}
