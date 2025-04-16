#include <stdio.h>

int main() {
    char s[100];
    
    /*  "%[^\n]%*c"
        %[^\n]: 
        means "read all characters until you encounter a newline"
            
        %[..]:  means "read a sequence of characters
             that match what's inside the brackets"
            
            ^:      inside the brackets means "NOT",
             so read any characters that are NOT what follows.
        
        %*c:
        This effectively discards the newline character

        %c: normally reads a single character
        *:  means "read this character 
         but don't assign it to any variable"
    */
    scanf("%[^\n]%*c", s);  // Example: s = Life is beautiful
    printf("Hello, World!\n%s", s);
    
    return 0;
}