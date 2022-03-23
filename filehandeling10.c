// C program to Open a File,
// Read from it, And Close the File

# include <stdio.h>
# include <string.h>

int main( )
{

	// Declare the file pointer
	FILE *filePointer ;
    int upper=0, lower=0, special=0;
	
	// Declare the variable for the data to be read from file
	char dataToBeRead[50];

	// Open the existing file GfgTest.c using fopen()
	// in read mode using "r" attribute
	filePointer = fopen("GfgTest.txt", "r") ;
    char c;
	
	// Check if this filePointer is null
	// which maybe if the file does not exist
	if ( filePointer == NULL )
	{
		printf( "GfgTest.c file failed to open." ) ;
	}
	else
	{
		
		// printf("The file is now opened.\n") ;
		
		// Read the dataToBeRead from the file
		// using fgets() method
		// while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
		// {
		
		// 	// Print the dataToBeRead
		// 	printf( "%s" , dataToBeRead );
        //     printf("\n");
		// }
        	while (1) {

		// fgets() reads each character of the file	
		c = fgetc(filePointer);

		// break the loop on reaching the EOF - End of File character
		if (c == EOF)
			break;

		// if c is uppercase alphabet, increment upper
		if (c >= 'A' && c <= 'Z')
			++upper;
		// if c is lowercase alphabet, increment lower
		else if (c >= 'a' && c <= 'z')
			++lower;
        else if(c!=' ')
            ++special;


	}
		
		// Closing the file using fclose()
		fclose(filePointer) ;
		
		// printf("Data successfully read from file GfgTest.c\n");
		// printf("The file is now closed.") ;
        printf("Uppercase: %d\nLowercase: %d\n Special: %d", upper, lower, special);
	}
	return 0;	
}
