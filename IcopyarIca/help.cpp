/*
	function that prints description and all the syntax related to program
*/

#include <iostream>

void help() {
	printf("IcopyarIca\n\n");
	printf("IcopyarIca[-help | -h] < -displays all syntax and help\n");
	printf("IcopyarIca[-text | -t] < -to make text file copy\n");
	printf("IcopyarIca[-bin | -b] < -to make binary file copy\n");
	printf("IcopyarIca[file path to copy][file path where to make a copy][-text | -t | -bin | -b][bufor] < -classic syntax");
}