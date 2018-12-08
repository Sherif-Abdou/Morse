#include <iostream>
#include "MorseParser.h"

int main(int argc, char **argv) {
    auto parser = MorseParser();
    auto message = argv[1];
    auto parsed = parser.toMorse(message);
    int i = 0;
    for (auto character : parsed) {
        std::cout << character;
        i++;
        if (i != parsed.size()) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    return 0;
}
