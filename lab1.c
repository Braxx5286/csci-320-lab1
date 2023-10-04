/*
 * Implement your solution in thi file
 *
 */
#include <stdio.h>
#include <stdlib.h>

char* readString(char* fileName) {
    char* buffer = NULL;
    size_t len = 0;
    size_t bytesRead;

    // Read a line from the file into the buffer
    bytesRead = getline(&buffer, &len, fileName);
    
    if (bytesRead == -1) {
        // Error or end of file
        free(buffer);
        return NULL;
    } else {
        // Remove the newline character, if present
        if (bytesRead > 0 && buffer[bytesRead - 1] == '\n') {
            buffer[bytesRead - 1] = '\0';
        }
        return buffer;
    }
}

char* mysteryExplode(const char* str) {
    // The length of the string to be returned can be represented by:
    // (N*(N+1) / 2) + 1
    
}