#include "../include/file_utils.h"
#include <fstream>
#include <vector>
#include <sstream>


void writeToFile(const std::string& filename, const std::string& data) {
    std::ofstream file(filename, std::ios::app);
    if (file.is_open()) {
        file << data << "\n";
        file.close();
    }
}

std::vector<std::string> readFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
    return lines;
}

bool findUser(const std::string& username) {
    std::vector<std::string> lines = readFromFile("data/users.dat");
    for (const auto& line : lines) {
        std::stringstream ss(line);
        std::string fileUser;
        std::getline(ss, fileUser, '|');
        if (username == fileUser) {
            return true;
        }
    }
    return false;
}
