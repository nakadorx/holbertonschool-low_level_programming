#include <stdio.h>
/**
 * main - Entry point
 *
 */
int main(void){
    char ch;
    for (ch = 'z'; ch >= 'a'; ch--){
        putchar(ch);
        putchar('\n');
    }
    return (0);
}
