#include "human.hpp"
#include <stdlib.h>
#include "menu.hpp"
#include "inputHandler.hpp"

std::string cmdInput;

int main(){
    srand(time(NULL));
    while (gameRunning == true){
    system("CLS");
    printMenu();
    std::cin >> cmdInput;
    getInput(cmdInput);
    }
    return 0;
}