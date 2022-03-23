
// C program to Open a File,
// Write in it, And Close the File
 
# include <stdio.h>
# include <string.h>
 
int main( )
{
 
    // Declare the file pointer
    FILE *filePointer ;
    char ID[2]={'k', 's'};
    char batch[2]={'L', 'A'};
     
    // Get the data to be written in file
    // char dataToBeWritten[50]
        // = "GeeksforGeeks-A Computer Science Portal for Geeks";
 
    // Open the existing file GfgTest.c using fopen()
    // in write mode using "w" attribute
    filePointer = fopen("q7.txt", "w") ;
     
    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {
         
        printf("The file is now opened.\n") ;
         
        // Write the dataToBeWritten into the file
        // if ( strlen ( dataToBeWritten ) > 0 )
        // {
             
        //     // writing in the file using fputs()
        //     fputs(dataToBeWritten, filePointer) ;
        //     fputs("\n", filePointer) ;
        // }
         for(int i=0; i<2; i++){
             fputs("ID: ", filePointer);
             fputc(ID[i], filePointer);
             fputs("    ", filePointer);
             fputs("Batch: ", filePointer);
             fputc(batch[i], filePointer);
             fputs("\n\n", filePointer);
         }
        // Closing the file using fclose()
        fclose(filePointer) ;
         
        printf("Data successfully written in file q7.txt\n");
        printf("The file is now closed.") ;
    }
    return 0;       
}