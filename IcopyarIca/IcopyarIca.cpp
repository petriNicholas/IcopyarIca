/*
@author Nicholas Petri

program that copies one file to another,
*/
#include <iostream>
#include <string>
#include "help.h"
#include "const.h"
#include "copy.h"

int main(int argc, char *argv[])
{

    if (argc > 5) {
        printf("Too many arguments! Check syntax!\n");
        help();
        return 0;
    }
    
    if (argc > 1) {
        if (argv[1] == h1 || argv[1] == h2) {
            help();
            return 0;
        }

        if (argv[1] == t1 || argv[1] == t2) {
            text();
            return 0;
        }

        if (argv[1] == b1 || argv[1] == b2) {
            bin();
            return 0;
        }
    }

    user(argv[1], argv[2], argv[3], argv[4]);
}