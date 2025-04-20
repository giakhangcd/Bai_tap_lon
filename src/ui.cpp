#include "../include/ui.h"
#include <iostream>
#include <conio.h>
<<<<<<< HEAD
using namespace std;
void showMenu() {
    cout << "========================\n";
    cout << "TRANSACTION SYSTEM\n";
    cout << "1 LOGIN\n";
    cout << "2 REGISTER\n";
    cout << "3 REGISTER FOR MANAGER\n";
    cout << "PRESS 1/2/3\n";
    cout << "========================\n";
=======

void showMenu() {
    std::cout << "========================\n";
    std::cout << "TRANSACTION SYSTEM\n";
    std::cout << "1 LOGIN\n";
    std::cout << "2 REGISTER\n";
    std::cout << "PRESS 1/2\n";
    std::cout << "========================\n";
>>>>>>> 21cc5e338a896d6f864f983a342a47a25c945da2
}

char getMenuChoice() {
    return _getch();
}

void showRegisterScreen() {
<<<<<<< HEAD
    cout << ">> REGISTER SYSTEM <<\n";
}

void showLoginScreen() {
    cout << ">> LOGIN SYSTEM <<\n";
}
void showRegisterScreenforManager() {
	cout << ">> REGISTER SYSTEM FOR MANAGER <<\n";
}
string AutoPassword(const string& prompt) {
	cout << prompt;
	return "1";
}
string getInput(const string& prompt) {
    cout << prompt;
    string input;
    getline(cin, input);
    return input;
}

void showMessage(const string& message) {
    cout << message << "\n";
=======
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
>>>>>>> 21cc5e338a896d6f864f983a342a47a25c945da2
}
