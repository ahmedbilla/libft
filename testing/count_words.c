#include <stdio.h>
// static int count_words(const char *str, char delimiter) {
//     int count = 0;
//     int in_word = 0;

//     while (*str) {
//         if (*str == delimiter) {
//             in_word = 0;
//         } else if (in_word == 0) {
//             in_word = 1; 
//             count++;
//         }
//         str++;
//     }
//     return count;
// }

static int count_words(const char *str, char delimiter) {
    int count = 0;

    while (*str) {
        while (*str == delimiter) {
            str++;
        }
        if (*str != '\0') {
            count++;
            while (*str && *str != delimiter) {
                str++;
            }
        }
    }
    return count;
}

int main()
{
    char str[] = "ahmed billa";
    printf("%d", count_words(str, ' '));
}