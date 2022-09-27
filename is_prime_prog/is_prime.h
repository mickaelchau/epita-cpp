//
// Created by Mickael Chau on 22/09/2022.
//

#ifndef EPITA_CPP_PARSE_FILE_H
#define EPITA_CPP_PARSE_FILE_H


int parse_file();

/*
 * int parse_file()
{
    std::string word;
    std::string line;
    int word_int;
    getline (std::cin, line);
    std::cout << line;
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
 * */

#endif //EPITA_CPP_PARSE_FILE_H
