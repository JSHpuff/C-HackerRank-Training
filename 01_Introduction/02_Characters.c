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

    while(getchar() != '\n');

    char s[100];
    scanf("%[^\n]%*c", s);
    printf("%s\n",s);
    
    char sen[100];
    scanf("%99[^\n]%*c", sen);
    printf("%s", sen);
    
    return 0;
}