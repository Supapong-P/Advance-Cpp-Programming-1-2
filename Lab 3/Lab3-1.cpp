#include <iostream>
#include <fstream>
#include <string>

int main() {
    int pos;
    std::ifstream file("subject.txt");
    if (!file) {
        std::cerr << "Error: could not open subject.txt\n";
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << '\n';
        // transform line to lowercase for case-insensitive search
        std::string lowerLine = line;
        for (char &c : line) {  
            c = std::tolower(c);
        }
        pos = line.find("love");
        if (pos <= line.length()) {
            std::cout << "'love' found at position: " << pos << '\n';
        } else {
            std::cout << "'love' not found\n";
        }
    }

    return 0;
}
