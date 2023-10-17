/*
 * Implement your solution in thi file
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"

char* readString(char* fileName) {
    char* buffer = NULL;
    size_t len = 0;
    ssize_t bytesRead;

    FILE* file = fopen(fileName, "r");

    if (file == NULL) {
        fprintf(stderr, "An Error While Opening The File Has Occurred.\n");
        return NULL;
    }

    bytesRead = getline(&buffer, &len, file);

    fclose(file);

    if (bytesRead == -1) {
        free(buffer);
        fprintf(stderr, "An Error While Reading The File Has Occurred.\n");
        return NULL;
    } else {
        if (bytesRead > 0 && buffer[bytesRead - 1] == '\n') {
            buffer[bytesRead - 1] = '\0';
        }
        return buffer;
    }
}

char* mysteryExplode(const char* str) {
    // The length of the string to be returned can be represented by:
    // (N*(N+1) / 2) + 1 (given in class)
    int inputLength = strlen(str); // Integer variable that represents the length of the input string
    int resultLength = (inputLength * (inputLength + 1) / 2) + 1; // Length of the string to be returned, calculated using equation given in class UwU
    char* outputStr = (char*)malloc(resultLength); // Allocates memory dynamically for the result string

    outputStr[0] = '\0'; // Initialize the result string as an empty string

    int outputIndex = 0; // Track the current position in the result string

    for (int i = 1; i <= inputLength; i++) { // Loop through the input string
        for (int j = 0; j < i; j++) { // Copy characters from inputStr to outputStr
            outputStr[outputIndex++] = str[j];
        }
        outputStr[outputIndex] = '\0'; // Update the null-termination of the C string
    }

    return outputStr;
}