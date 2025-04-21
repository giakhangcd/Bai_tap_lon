#ifndef UI_H
#define UI_H
#include <string>

void showMenu();
char getMenuChoice();
void showRegisterScreen();
void showLoginScreen();
std::string getInput(const std::string& prompt);
void showMessage(const std::string& message);
void showRegisterScreenForMnger();
void showChangePasswordScreen();

#endif
