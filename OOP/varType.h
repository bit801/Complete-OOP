//
//  varType.h
//  OOP
//
//  Created by Hurtado, Ken on 12/6/16.
//  Copyright © 2016 Hurtado, Ken. All rights reserved.
//

#ifndef varType_h
#define varType_h
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;


#endif /* varType_h */

///////////////////////////////////////
//varType class definition
//displays the lowest and highest value each var type can hold.
//as well as digits of precision and bytes of memory used

class varType {
private:
    string userIn;
    string boolLow = "false";
    string boolHigh = "true";
    string boolBytesOfMem = "1";
    
    string charLow = "-128";
    string charHigh = "127";
    string charBytesOfMem = "1";
    
    string shortLow = "-32,768";
    string shortHigh = "32,767";
    string shortBytesOfMem = "2";
    
    string intLow = "-2,147,483,648";
    string intHigh = "2,147,483,648";
    string intBytesOfMem = "4";
    
    string longLow = "-2,147,483,648";
    string longHigh = "2,147,483,648";
    string longBytesOfMem = "4";
    
    string floatLow = "3.4x10^-38";
    string floatHigh = "3.4x10^38";
    string floatDigPrec = "7";
    string floatBytesOfMem = "4";
    
    string doubleLow = "1.7x10^-308";
    string doubleHigh = "1.7x10^308";
    string doubleDigOfPrec = "13";
    string doubleBytesOfMem = "7";
    
    string unsignedCharLow = "0";
    string unsignedCharHigh = "255";
    string unsignedCharBytesOfMem = "1";
    
    string unsignedShortLow = "0";
    string unsignedShortHigh = "65,535";
    string unsignedShortBytesOfMem = "2";
    
    string unsignedIntLow = "0";
    string unsignedIntHigh = "4,294,967,295";
    string unsignedIntBytesOfMem = "4";
    
    string unsignedLongLow = "0";
    string unsignedLongHigh = "4,294,967,295";
    string unsignedLongBytesOfMem = "4";
    
public:
    //setVar function definition. Displays var type data info relative to user input
    void setVar(string userData) {
        userIn = userData;
        if (userData == "bool") {
            cout << setw(35) << "Numerical Range" << setw(28) << endl;
            cout << setw(7) << "Keyword" << setw(13) << "Low" << setw(18) << "High" << setw(32) << "Digits of Preceision" << setw(18) << "Bytes of memory" << endl;
            
            for (int i=0; i<89; i++) {
                cout << "_";
            }
            cout << endl;
            
            cout << "bool" << setw(18) << boolLow << setw(16) << boolHigh << setw(15) << "N/A" << setw(21) << boolBytesOfMem << endl;
            cout << endl;
        } else if (userData == "char") {
            cout << setw(35) << "Numerical Range" << setw(28) << endl;
            cout << setw(7) << "Keyword" << setw(13) << "Low" << setw(18) << "High" << setw(32) << "Digits of Preceision" << setw(18) << "Bytes of memory" << endl;
            
            for (int i=0; i<89; i++) {
                cout << "_";
            }
            cout << endl;
            
            cout << "char" << setw(17) << charLow << setw(16) << charHigh << setw(16) << "N/A" << setw(21) << charBytesOfMem << endl;
            cout << endl;
        } else if (userData == "short") {
            cout << setw(35) << "Numerical Range" << setw(28) << endl;
            cout << setw(7) << "Keyword" << setw(13) << "Low" << setw(18) << "High" << setw(32) << "Digits of Precei    sion" << setw(18) << "Bytes of memory" << endl;
            
            for (int i=0; i<89; i++) {
                cout << "_";
            }
            cout << endl;
            
            cout << "short" << setw(19) << shortLow << setw(16) << shortHigh << setw(13) << "N/A" << setw(21) << shortBytesOfMem << endl;
            cout << endl;
        } else if (userData == "int") {
            cout << setw(35) << "Numerical Range" << setw(28) << endl;
            cout << setw(7) << "Keyword" << setw(13) << "Low" << setw(18) << "High" << setw(32) << "Digits of Preceision" << setw(18) << "Bytes of memory" << endl;
            
            for (int i=0; i<89; i++) {
                cout << "_";
            }
            cout << endl;
            
            cout << "int" << setw(28) << intLow << setw(16) << intHigh << setw(6) << "N/A" << setw(21) << intBytesOfMem << endl;
            cout << endl;
            
            
        } else {
            cout << setw(35) << "Numerical Range" << setw(28) << endl;
            cout << setw(7) << "Keyword" << setw(13) << "Low" << setw(18) << "High" << setw(32) << "Digits of Preceision" << setw(18) << "Bytes of memory" << endl;
            
            for (int i=0; i<89; i++) {
                cout << "_";
            }
            cout << endl;
            cout << "Fail\n";
            cout << endl;
        }
    }
    
};
//end varType class definition
////////////////////////////////////////

