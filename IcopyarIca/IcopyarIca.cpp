/*
@author Nicholas Petri

program that copies one file to another,
*/
#include <iostream>
#include "help.h"

int main(int argc, char *argv[])
{
    if (argc > 5) {
        printf("%s", argv[1]);
        printf("Too many arguments! Check syntax!\n");
        help();
        return 0;
    }

    if (argv[1] == "h") {
        help();
        return 0;
    }    
}