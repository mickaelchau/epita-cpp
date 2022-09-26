//
// Created by Mickael Chau on 22/09/2022.
//
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "parse_file.h"

int parse_file(std::string& file_path, std::string& motif)
{
    std::string line;
    std::string word;
    std::ifstream myfile (file_path);
    int count = 0;
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            std::istringstream line_stream(line);
            while (line_stream >> word)
            {
                if (word.find(motif) != std::string::npos)
                    count++;
            }
        }
        myfile.close();
    }
    else
    {
        std::cout << "The file " << file_path << " could not be opened.";
        return 1;
    }
    std::cout << "The file " << file_path << " contains " << count << " words containing the motive " << motif;
    return 0;
}

