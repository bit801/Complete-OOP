//
//  ProgrammingBasics.cpp
//  OOP
//
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "userMenu.h"
//#include "varType.h"

using namespace std;

//begin main
int main() {
    
    userMenu& usrMenu = *(new userMenu);            //create new object of type userMenu
    
    usrMenu.startMenu();
    
    return 0;
}
