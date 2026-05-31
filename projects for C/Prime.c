#include <stdio.h>

void caesar(char *letters, int shift) {
    int i = 0;
    
    // Normalize shift to be within 0-25 to handle large/negative shifts
    shift = shift % 26;
    if (shift < 0) {
        shift += 26;
    }

    while (letters[i]!= '\0') { // Stop at ASCII 0
        char c = letters[i];
        
        // Check if uppercase A-Z
        if (c >= 'A' && c <= 'Z') {
            letters[i] = 'A' + (c - 'A' + shift) % 26;
        }
        // Check if lowercase a-z 
        else if (c >= 'a' && c <= 'z') {
            letters[i] = 'a' + (c - 'a' + shift) % 26;
        }
        // Non-letters stay unchanged
        
        i++;
    }
}

