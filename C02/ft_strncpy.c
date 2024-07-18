#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *dest_org;
    unsigned int i;

    i = 0;
    dest_org = dest;
    while (*src && i < n)
    {
        *dest = *src;
        src++;
        dest++;
        i++;
    }
    *dest = '\0';
    return(dest_org);
}

int main()
{
    char src[] = "HOLA";
    char src1[] = "Hello";
    char dest[10];
    char des1[10];
    int n = 2;
    
    printf("este es el resultado de copiar 2 dígitos :%s\n", ft_strncpy(dest, src, n));
    printf("este es el resultado de copiar 2 dígitos :%s\n", strncpy(des1, src1, n));

}