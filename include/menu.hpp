#pragma once
#include <string>
#include <iostream>
#include "human.hpp"
#define print(msg) std::cout << msg << std::endl;

int currentMenu = 0;
int previousMenu;
int times2runGen = 1;

bool changingVar = false;
std::string output = "";
Human human;

void mainMenu(){
    print("Welcome to my Generator using Procedural Generation")
    print("This is a Console Application written in C++ by Jack Cedar")
    print("")
    print("type \"help\" or \"h\" to list available commands.")
};
void helpMenu(){
    print("Help Menu:")
    print("type \"return\" or \"r\" to return to the Main Menu")
    print("type \"exit\" or \"e\" to quit the program")
    print("type \"gen\" or \"g\" to run the generation")
    print("type \"config\" to configure the generation variables")
}
void configMenu(){
    std::cout << "1) Miniumum Name Length = " << minLength << std::endl;
    std::cout << "2) Maxiumum Name Length = " << maxLength << std::endl;
    std::cout << "3) Vowel Chance = " << chanceOfVowel << std::endl;
    std::cout << "4) Times to Run = " << times2runGen << std::endl;
    print("")
    print("type 1-4 to edit variables");
    

}

void runGen(){
    human.generate(times2runGen);
}


void menuToPrint(){
    switch (currentMenu)
    {
    case 0:return mainMenu();break;
    case 1:return helpMenu();break;
    case 2:return runGen();break;
    case 3:return configMenu();break;
    default:break;
    }
}
void printMenu(){
    menuToPrint();
}