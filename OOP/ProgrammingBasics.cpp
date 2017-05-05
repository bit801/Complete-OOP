//
//  ProgrammingBasics.cpp
//  OOP
//
//  This comment is just to test commit
//  This comment is to fix the last commit
//
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "userMenu.h"


using namespace std;

//begin main
int main() {
    
    userMenu& usrMenu = *(new userMenu);            //create new object of type userMenu
    
    usrMenu.startMenu();
    
    return 0;
}
