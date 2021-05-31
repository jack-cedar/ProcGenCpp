#pragma once
#include <iostream>
#include <string>
#include <ctime>

int minLength = 5;
int maxLength = 8;
int chanceOfVowel = 25;

char randVowel(){
    char vowels[]{'a','e','i','o','u','y'};
    
    return (vowels[(rand()% 6)]);
}
char randConsonants(){
    char consonants[]{'l','o','n','s','g','h','y'};
    
    return (consonants[(rand()% 7)]);
}

char getChar(){
    
    int randomNum = (rand() % 100);
    char nChar; 
    switch (randomNum > chanceOfVowel)
    {
    case false:  nChar = randVowel();break;
    default:nChar = randConsonants();break;
    };

    return (nChar);
}

std::string genName(){
    int nameLength = ((rand() % (maxLength-minLength))+minLength);
    std::string myName = "";
    for(int i = 0; i < nameLength; i++){
        char nChar = getChar();
        myName = myName + nChar;
    }
    return (myName);
}
