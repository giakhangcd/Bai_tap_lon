#include "../include/user.h"
#include "../include/file_utils.h"
#include <functional>
#include <sstream>

User::User(const std::string& uname, const std::string& pwd) : username(uname), password(pwd) {}

std::string User::getUsername() const { return username; }
std::string User::getPassword() const { return password; }

std::string hashPassword(const std::string& password) {
    std::hash<std::string> hasher;
    return std::to_string(hasher(password));
}

bool registerUser(const std::string& username, const std::string& password) {
    // Ki?m tra kho?ng tr?ng
    if (username.find(" ") != std::string::npos || password.find(" ") != std::string::npos) {
        return false;
    }
    // Ki?m tra xem username dã t?n t?i chua
    if (findUser(username)) {
        return false;
    }
    // Luu thông tin
    std::string hashed = hashPassword(password);
    writeToFile("data/users.dat", username + "|" + hashed);
    return true;
}

bool loginUser(const std::string& username, const std::string& password) {
    std::string hashed = hashPassword(password);
    std::vector<std::string> lines = readFromFile("data/users.dat");
    for (const auto& line : lines) {
        std::stringstream ss(line);
        std::string fileUser, filePass;
        std::getline(ss, fileUser, '|');
        std::getline(ss, filePass, '|');
        if (username == fileUser && hashed == filePass) {
            return true;
        }
    }
    return false;
}
