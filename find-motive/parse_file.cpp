//
// Created by Mickael Chau on 22/09/2022.
//
#include <iostream>
#include <fstream>
#include "parse_file.h"
int foo()
{
    return 3;
}

int parse_file(std::string& file_path)
{
    std::cout << "file_path" << file_path.c_str() << "\n";
    std::fstream myfile;
    myfile.open (file_path.c_str());
    std::string word;
    std::cout << "in parse file\n";
    while (myfile >> word)
    {
        std::cout << "in parse file loop\n";
        std::cout << word << "\n";
    }
    return 0;
}

