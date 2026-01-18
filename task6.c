#include<stdio.h>

// File Echo (file I/O)

int main() {
    FILE *file; // File pointer
    char buffer[100]; // Buffer to hold file content

    // Open file in write mode
    file = fopen("test.txt", "w");

    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write content to file
    fprintf(file, "Hello World");

    // Close the file
    fclose(file);

    // open file in read mode
    file = fopen("test.txt", "r");

    if (file == NULL){
        printf("Error opening file to read.\n");
        return 1;
    }

    // Read content from file
    fgets(buffer, 100, file);

    // Print the content read from file
    printf("File content: %s\n", buffer);

    // Close the file
    fclose(file);
    return 0;

}