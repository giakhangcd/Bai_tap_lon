#include "../include/ui.h"
#include <iostream>
#include <conio.h>

void showMenu() {
    std::cout << "========================\n";
    std::cout << "TRANSACTION SYSTEM\n";
    std::cout << "1 LOGIN\n";
    std::cout << "2 REGISTER\n";
    std::cout << "PRESS 1/2\n";
    std::cout << "========================\n";
}

char getMenuChoice() {
    return _getch();
}

void showRegisterScreen() {
    std::cout << ">> REGISTER SYSTEM <<\n";
}

void showLoginScreen() {
    std::cout << ">> LOGIN SYSTEM <<\n";
}

std::string getInput(const std::string& prompt) {
    std::cout << prompt;
    std::string input;
    std::getline(std::cin, input);
    return input;
}

void showMessage(const std::string& message) {
    std::cout << message << "\n";
}
