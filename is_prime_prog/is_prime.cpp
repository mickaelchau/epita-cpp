//
// Created by Mickael Chau on 22/09/2022.
//
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>
#include "is_prime.h"

int is_prime(int number)
{
    if (number <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;

    return true;
}

std::string convert_bool(bool boolean)
{
    if (boolean)
        return "True";
    return "False";
}

int parse_file()
{
    std::string word;
    std::string line;
    int word_int;
    getline (std::cin, line);
    std::istringstream line_stream(line);
    while (line_stream >> word) {
        try {
            word_int = std::stoi(word);
        }
        catch (std::exception &err) {
            std::cerr << "Fail to convert number\n";
        }
        bool primed = is_prime(word_int);
        std::cout << word_int << " is a prime: " << convert_bool(primed) << "\n";
    }
    return 1;
}

