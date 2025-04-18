#ifndef USER_H
#define USER_H
#include <string>

class User {
private:
    std::string username;
    std::string password; // Luu m?t kh?u bam
public:
    User(const std::string& uname, const std::string& pwd);
    std::string getUsername() const;
    std::string getPassword() const;
};

// H�m bam m?t kh?u
std::string hashPassword(const std::string& password);

// H�m dang k� t�i kho?n
bool registerUser(const std::string& username, const std::string& password);

// Ham dang nhap
bool loginUser(const std::string& username, const std::string& password);

#endif
