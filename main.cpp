/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on September 16, 2016, 2:28 PM
 */

#include <cstdlib>
#include "intArray.h"

/*
 * 
 */
int main(int argc, char** argv) {
    intArray Array1(5, -2);
    intArray Array2(5, -2);
    
    Array1.Print();
    Array1.PrintSize();
    
    Array1 + 15;
    Array1.Print();
    Array1.PrintSize();
   
    if(Array1 == Array2) {
        cout << "Array1 == Array2" << endl;
    } else {
        cout << "Array1 != Array2" << endl;
    }
    
    cout << Array1[0] << " " << Array2[0] << endl;
    return 0;
}

