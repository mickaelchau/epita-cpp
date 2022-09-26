#include <iostream>
#include "parse_file.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        std::cerr << "Invalid number of arguments\n";
        return 1;
    }
    std::string path_file = argv[1];
    std::string &ref_path = path_file;
    std::string motif = argv[2];
    std::string &ref_motif = motif;
    return parse_file(ref_path, ref_motif);
}

/* input.txt: pqth of q text file
 *
 * input.txt == je suis la
 *  (1 == find_motive(input.txt, "je"))
 *  (0 == find_motive(input.txt, "other"))

 * input.txt == jeje suis la
 *  (1 == find_motive(input.txt, "je"))
 *

 (erreur == find_motive(inpufgft, "je"))

*/