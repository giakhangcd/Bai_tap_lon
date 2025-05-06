#ifndef FILE_UTILS_H
#define FILE_UTILS_H
#include <string>
#include <vector>

void writeToFile(const std::string& filename, const std::string& data);

std::vector<std::string> readFromFile(const std::string& filename);

bool findUser(const std::string& username);

#endif
