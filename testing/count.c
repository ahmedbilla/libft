#include <stdio.h>
int ft_split(const char *str, char c)

{
    int i  = 0;
    while (str[i] != '\0')
    {  
        if (str[i] != c)
        {
            i++;
        }
        i++;
    }

    return i;
}
int  main()
{
    char str[]= "hello world";
    printf("%d", ft_split(str, ' '));
}