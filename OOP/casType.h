//
//  casType.h
//  OOP
//
//  Created by Hurtado, Ken on 12/6/16.
//  Copyright © 2016 Hurtado, Ken. All rights reserved.
//

#ifndef casType_h
#define casType_h
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;


#endif /* casType_h */

////////////////////////////////////////
//casType class definition
//tests signed and unsigned integers
class casType {
private:
    string userIn;
    int intVar = 1500000000;
    int intCast;
public:
    //dspCast function definition, displays information relative to casting
    void dspCast() {
        int intNoCast = (intVar*10)/10;                     //result too large
        intCast = (static_cast<double>(intVar) * 10)/10;    //cast to double
        cout << endl;
        for (int i=0; i<89; i++) {
            cout << "_";
        }
        cout << endl;
        cout << "The int is: " << intVar << ". " << setw(13) << "Multiplied by 10 without casting is: " << intNoCast << endl;
        cout << "The int is: " << intVar << ". " << setw(13) << "Multiplied by 10 with casting is: " << intCast << endl;
        cout << endl;
        system("clear");
    }
};
//end casType definition
////////////////////////////////////////

