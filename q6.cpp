#include <stdio.h>

int main() {

	// int upper = 0, lower = 0;
	char c;

	// open file - text.txt
	// the second parameter "r" denotes we are only reading the content of the file
	// we cannot manipulate the content of the file
	FILE* fp = fopen("copy.txt", "r");
    FILE *filePointer ;
    filePointer=fopen("paste.txt", "w");

	// if file doesn't open due to some problem, then terminate the program
	if (fp == NULL || filePointer==NULL)
		return 0;


	while (1) {

		// fgets() reads each character of the file	
		c = fgetc(fp);

		// break the loop on reaching the EOF - End of File character
		if (c == EOF)
			break;
        fputc(c, filePointer) ;
		// // if c is uppercase alphabet, increment upper
		// if (c >= 'A' && c <= 'Z')
		// 	++upper;
		// // if c is lowercase alphabet, increment lower
		// else if (c >= 'a' && c <= 'z')
		// 	++lower;

	}
    printf("Cheak the file it has been sucesfully copied\n");

	fclose(fp);

	// printf("Uppercase: %d\nLowercase: %d", upper, lower);

}