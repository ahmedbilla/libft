#include <stdio.h>
#include <stdlib.h>
static char *copy_word(const char *start, const char *end) {
    int length = end - start; 
    char *word = (char *)malloc(length + 1); 
    if (word) {
        for (int i = 0; i < length; i++) {
            word[i] = start[i]; 
        }
        word[length] = '\0'; 
    }
    return word;
}
int main()
{
    char s = 'a';
    char s2 = 'b';

    printf("%s",copy_word(&s,&s2));
  
}