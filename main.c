

#include "libft.h"

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
// void	*ft_calloc(size_t count, size_t size);

// int  main()
// {
//     char *ft = ft_calloc(5, sizeof(int));

//     printf("%s", ft_calloc(SIZE_MAX, SIZE_MAX));

//     int i = 0;
//     while (i < 5)
//     {
//         printf("%d", ft[i]);
//         i++;
//     }
// }

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

//>>>>>>>>>>>ft_memchr<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello";
//     char c = 'l';
//     printf("%s",ft_memchr(str,c, 3));
// }

//>>>>>>>>>>>ft_memcmp<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello";
//     char str1[] = "hello";
//     printf("%d",ft_memcmp( str, str1, 5));
// }

//>>>>>>>>>>>ft_memcpy<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello";
//     char str1[] = "world";
//     printf("%s", ft_memcpy(str,str1, 5));
// }

//>>>>>>>>>>>ft_memcpy<<<<<<<<<<//
// int main()
// {
//        char str[] = "hello";
//     char str1[] = "world";
//     printf("%s", ft_memmove(str,str1, 5));
// }

//>>>>>>>>>>>ft_memset<<<<<<<<<<//
// int main()
// {
//     int res;
//     ft_memset(&res, 0, 4);
//     ft_memset(&res, 0, 3);
//     ft_memset(&res, 5, 2);
//     ft_memset(&res, 57, 1);

//     printf("%d", res);
// }

//>>>>>>>>>>>ft_putchar_fd<<<<<<<<<<//
// int main()
// {
//     int fd = open("file.txt", O_CREAT | O_RDWR | O_APPEND, 0777);
//     ft_putchar_fd('a', fd);
// }

//>>>>>>>>>>>ft_putendl_fd<<<<<<<<<<//
// int main()
// {
//     int fd = open("file.txt", O_CREAT | O_RDWR | O_APPEND, 0777);
//     ft_putendl_fd("hello", fd);
// }

//>>>>>>>>>>>ft_putnbr_fd<<<<<<<<<<//
// int main()
// {
//     int fd = open("file.txt", O_CREAT | O_RDWR | O_APPEND, 0777);
//     int str = 9985121;
//     ft_putnbr_fd(str, fd);
// }

//>>>>>>>>>>>ft_split<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello world";
//     char c = ' ';

//     char **sp = ft_split(str, c);
//     int i = 0;
//     while(sp[i])
//     {
//         printf("%s", sp[i]);
//         i++;
//     }
// }

//>>>>>>>>>>>ft_strchr<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello";
//     char c = 'l';
   
//     printf("%s",ft_strchr(str, c));
// }

//>>>>>>>>>>>ft_strdup<<<<<<<<<<//
// int main()
// {
//    char str[] = "hello world";
//    printf("%s", ft_strdup(str));
// }

//>>>>>>>>>>>ft_striteri<<<<<<<<<<//
// void to_uppercase(unsigned int c,char *a)
// {
//     if (*a >= 'a' && *a <= 'z')
//     {
//         *a -= 32;
//     }
    
// }
// int main()
// {
//     char str[] = "hello world";
//     ft_striteri(str, to_uppercase);
//     printf("%s", str);
// }

//>>>>>>>>>>>ft_strjoin<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello";
//     char str1[] = "world";

//     printf("%s", ft_strjoin(str, str1));
// }

//>>>>>>>>>>>ft_strlcat<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello";
//     char str1[] = "world";
//     printf("%zu",ft_strlcat( str, str1, 2));
// }

//>>>>>>>>>>>ft_strlcpy<<<<<<<<<<//
// int main()
// {
//     char str[] = "hello";
//     char str1[] = "worldq";
//     printf("%zu", ft_strlcpy(str, str1, 6));
// }