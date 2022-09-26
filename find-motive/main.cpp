#include <iostream>
#include "parse_file.h"

int main()
{
    std::cout << "HELLO WORLD" << foo() << "\n";
    std::string input = "input";
    std::string &ref_input = input;
    parse_file(ref_input);
    std::cout << "HELLO WORLD" << foo() << "\n";
    return 0;
}

/* input: pqth of q text file
 *
 * input == je suis la
 *  (1 == find_motive(input, "je"))
 *  (0 == find_motive(input, "other"))

 * input == jeje suis la
 *  (1 == find_motive(input, "je"))
 *

 (erreur == find_motive(inpufgft, "je"))

*/