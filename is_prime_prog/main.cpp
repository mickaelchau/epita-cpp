#include <iostream>
#include <sstream>
#include "is_prime.h"

int main()
{
    return parse_file();
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