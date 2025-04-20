#ifndef UI_H
#define UI_H
#include <string>

void showMenu();
char getMenuChoice();
void showRegisterScreen();
void showLoginScreen();
void showRegisterScreenforManager();
std::string getInput(const std::string& prompt);
void showMessage(const std::string& message);
std::string AutoPassword(const std::string& prompt);
#endif
