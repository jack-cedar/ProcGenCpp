#pragma once
#include <string>
#include<iostream>
#include "menu.hpp"

bool gameRunning = true;
void varChange(){
    if (changingVar == true){std::cout << "Enter Value: ";}
}

void getInput(std::string cmdInput){
    if(cmdInput == "exit" || cmdInput == "e"){gameRunning = false;};
    if(cmdInput == "return" || cmdInput == "r"){currentMenu = 0;};
    if(cmdInput == "help" || cmdInput == "h"){currentMenu = 1;};
    if(cmdInput == "gen" || cmdInput == "g"){currentMenu = 2;};
    if(cmdInput == "config"){currentMenu = 3;};
    
    
    
    
    if(currentMenu == 3){
        int input;
        if(cmdInput == "1"){std::cout << "Enter Value: "; std::cin >> input; minLength = input;};
        if(cmdInput == "2"){std::cout << "Enter Value: "; std::cin >> input; maxLength = input;};
        if(cmdInput == "3"){std::cout << "Enter Value: "; std::cin >> input; chanceOfVowel = input;};
        if(cmdInput == "4"){std::cout << "Enter Value: "; std::cin >> input; times2runGen = input;};
        changingVar = false;
    }
    }
    


    




