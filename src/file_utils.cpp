#include "../include/file_utils.h"
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void writeToFile(const string& filename, const string& data) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << data << "\n";
        file.close();
    }
}

vector<string> readFromFile(const string& filename) {
    vector<string> lines;
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
    return lines;
}

bool findUser(const string& username) {
    vector<string> lines = readFromFile("data/users.dat");
    for (const auto& line : lines) {
        stringstream ss(line);
        string fileUser;
        getline(ss, fileUser, '|');
        if (username == fileUser) {
            return true;
        }
    }
    return false;
}

