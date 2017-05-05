//
//  userMenu.h
//  OOP
//
//  Created by Hurtado, Ken on 12/6/16.
//  Copyright © 2016 Hurtado, Ken. All rights reserved.
//

#ifndef userMenu_h
#define userMenu_h

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "varType.h"
#include "casType.h"

using namespace std;

#endif /* userMenu_h */

////////////////////////////////////////
//userMenu class definition
//prompts for user var type or cast input
class userMenu {
private:
    string startMenuInput;
    varType& newVar = *(new varType);                 //create new object of type varType
    casType& newCast = *(new casType);
    
    
public:
    //setMenu function definition, takes user input and calls appropriate function. Ex: Quit, cast type, or var type
    void setMenu(string menuInput) {
        if (startMenuInput == "q" || startMenuInput == "Q") {
            return;
        } else if (startMenuInput == "cast"){
            newCast.dspCast();
            startMenu();
        } else {
            newVar.setVar(startMenuInput);
            startMenu();
        }
        
    }
    
    //startMenu function definition, a simple menu for user input
    void startMenu() {
        cout << "Please enter a variable type or just enter 'cast' or maybe 'q', maybe even 'Q': ";
        cin >> startMenuInput;
        cout << endl;
        setMenu(startMenuInput);
    }
};
//end userMenu definition
////////////////////////////////////////


