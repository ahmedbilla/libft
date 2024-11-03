


#include "libft.h"


//>>>>>>>>>>>ft_split<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello world how are you";
//     char c = ' ';
//     char **word = ft_split(str, c);
//     int i = 0;
//     while (word[i])
//     {
//         printf("%s", word[i]);
//         i++;
//     }
// }

//>>>>>>>>>>>ft_bezero<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello world";
//     int len = 5;
//     int i =0;
//     ft_bzero(str,len);
//     while (str[i] < len)
//     {
//        if(str[i] == 0)
//        {
//         printf("0");
//        }
//        i++;
//     }
// }

//>>>>>>>>>>>ft_calloc<<<<<<<<<<//
void	*ft_calloc(size_t count, size_t size);

int  main()
{
    char *ft = ft_calloc(5, sizeof(int));

    printf("%s", ft_calloc(SIZE_MAX, SIZE_MAX));


    int i = 0;
    while (i < 5)
    {
        printf("%d", ft[i]);
        i++;
    }
}

//>>>>>>>>>>>ft_isalnum<<<<<<<<<<//
// int main()
// {
//     int c = '1';
//     printf("%d", ft_isalnum(c));
// }

//>>>>>>>>>>>ft_memchr<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello world";
//     int c = 'h';
//     char *str = ft_memchr(str, c, 2);
//     printf("%s", str);
// }
// void	*ft_memset(void *ptr, int c, size_t n);
// int  main()
// {
//     // printf("\xe2\x82\xac\n");
//     unsigned long long s = '€';
//     printf("0x80", s);
// }