#include <map>
#include <string>
#include <fstream>
#include <regex>

// Define the goalstateMap structure
std::map<std::string, std::string> goalstateMap;

// Function to extract invariant information from test.cpp
void extractInvariantInfo() {
    std::ifstream file("test.cpp");
    std::string line;
    std::regex invariantPattern("mu__invariant_(\\d+)\\(\\)");

    while (std::getline(file, line)) {
        std::smatch matches;
        if (std::regex_search(line, matches, invariantPattern)) {
            std::string invariantName = matches[1];
            std::string invariantInfo = line;  // Modify this line to extract the specific information you need
            goalstateMap[invariantName] = invariantInfo;
        }
    }
}