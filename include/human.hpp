#pragma once
#include <iostream>
#include <string>
#include "nameGenerator.hpp"
#include "professions.hpp"

class Human
{
public:
    
    Human()
    {
     
        this->name = "none";
        this->age = 0;
        this->sex = "null";
        this->profession = "none";
    };
    
    Human(std::string name, int age, std::string sex, std::string profession)
    {
     
        this->name = name;
        this->age = age;
        this->sex = sex;
        this->profession = profession;
    }
    ~Human(){};

    const std::string& getName() const {return this->name;}
    const int& getAge() const {return this->age;}
    const std::string& getSex() const {return this->sex;}
    const std::string& getProf() const {return this->profession;}

    void setName(const std::string& name) {this->name = name;}
    void setAge(const int& age) {this->age = age;}
    void setSex(const std::string& sex) {this->sex = sex;}
    void setProf(const std::string& profession) {this->profession = profession;}

    void printInfo() const{
        std::cout << "Name: " + this->name << std::endl;
        std::cout << "Age: " + std::to_string(this->age) << std::endl;
        std::cout << "Sex: " + this->sex << std::endl;
        std::cout << "Profession: " + this->profession << std::endl;
        std::cout << std::endl;
    }
    void generate(int times2run) {
        times2run = times2run;
        for (int i = 0; i < times2run; i++){
        int randAge = (rand() % 64)+16;
        int randSex = (rand() % 100);
        std::string randProf = professions[(rand() % 20)];
        std::string randName = genName();
        switch (randSex > 50){
        case true: setSex("male");break;
        default: setSex("female");break;}
        setProf(randProf);
        setName(randName);
        setAge(randAge);
        printInfo();
        }
    }
private:
    std::string name;
    int age;
    std::string sex;
    std::string profession;
};