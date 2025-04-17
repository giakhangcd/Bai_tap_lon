#include "../include/ui.h"
#include "../include/user.h"
#include <cstdlib>

int main() {
    while (true) {
        showMenu();
        char choice = getMenuChoice();
        system("cls");

        if (choice == '1') {
            showLoginScreen();
            std::string username = getInput("Please enter your username: ");
            std::string password = getInput("Please enter your password: ");
            if (loginUser(username, password)) {
                showMessage(">> SUCCESSFULLY LOGIN <<");
                break; 
            } else {
                showMessage(">> LOGIN FAILED. Please try again.\n");
            }
        } else if (choice == '2') {
            showRegisterScreen();
            std::string username = getInput("Please enter your username: ");
            std::string password = getInput("Please enter your password: ");
            if (registerUser(username, password)) {
                showMessage(">>> SUCCESSFULLY CREATE ACCOUNT <<<");
                break; 
            } else {
                showMessage("Invalid input or username exists!\n");
            }
        } else {
            showMessage("WRONG INPUT\n");
        }
    }
    return 0;
}
