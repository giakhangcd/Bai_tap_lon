#include "../include/ui.h"
#include "../include/user.h"
#include <cstdlib>
using namespace std;
int main() {
    while (true) {
        showMenu();
        char choice = getMenuChoice();
        system("cls");

        if (choice == '1') {
            showLoginScreen();
            while (true) {
	            string username = getInput("Please enter your username: ");
	            string password = getInput("Please enter your password: ");
	            if (loginUser(username, password)) {
	                showMessage(">> SUCCESSFULLY LOGIN <<");
	               //system("cls");	//temporary
	                break; 
	            } else {
	            	system("cls");
	                showMessage(">> LOGIN FAILED. Please try again.\n");
	            }
	        } 
	        break;
		} else if (choice == '2') {
            showRegisterScreen();
            while (true) {
	            string username = getInput("Please enter your username: ");
	            string password = getInput("Please enter your password: ");
	            if (registerUser(username, password)) {
	                showMessage(">>> SUCCESSFULLY CREATE ACCOUNT <<<");
	                //system("cls");	//temporary
	                break; 
	            } else {
	            	system("cls");
	                showMessage("Invalid input or username exists!\n");
	            }
	    	}
	    	break;
        } else if (choice == '3') {
            showRegisterScreenforManager();
            while (true) {
	            string username = getInput("Please enter your username: ");
	            string password = AutoPassword("Your password will be '1', please change it in your first login\n");
	            if (registerUser(username, password)) {
	                showMessage(">>> SUCCESSFULLY CREATE ACCOUNT <<<");
	               //system("cls");	//temporary
	                break; 
	            } else {
	            	
	                showMessage("Invalid input or username exists!\n");
	            }
	        } 
	    } else {
	    	system("cls");
            showMessage("WRONG INPUT\n");
        }
    }
    return 0;
}
