//Create, open and close a file
#include <stdio.h>
void main() {
    // Create a file
    FILE *filePointer;  // Declare a FILE pointer
    filePointer = fopen("21-A-1.txt", "w");  // Open file in write mode ("w")
    // Check if the file is successfully created
    if (filePointer == NULL) {
        printf("Error creating the file.\n");
          // Return an error code
    }
    // Write content to the file
    fprintf(filePointer, "Hello world.");
    // Close the file
    fclose(filePointer);
    printf("File created, written, and closed successfully.\n");
      // Return success
}
