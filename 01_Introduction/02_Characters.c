#include <stdio.h>

/*  Sample input
    C
    Language
    Welcome To C!!
*/

int main(){
    char ch;
    scanf("%c",&ch);
    printf("%c\n", ch);

    /*  
        Purpose:
         This effectively "flushes" any remaining characters 
         including the newline from the input buffer, 
         ensuring that the next scanf starts fresh 
         with new input from the user.

        1. Calls getchar() repeatedly, 
         which reads and discards one character at a time
        
        2. Continues until it finds a newline character (\n)
    */
    while(getchar() != '\n');

    char s[100];
    scanf("%[^\n]%*c", s);
    printf("%s\n",s);
    
    char sen[100];
    /*
        Purpose:
         This is a safety feature to prevent buffer overflow

        %99: 
         It's a field width specifier that 
         limits the number of characters that 
         can be read into the sen array.
    */
    scanf("%99[^\n]%*c", sen);
    printf("%s", sen);
    
    return 0;
}