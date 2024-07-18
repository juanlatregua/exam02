#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    
    while(n && *s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
        n--;
    }
    if(n ==0)
        return(0);
    else
    {
    return(*(unsigned char *)s1 - *(unsigned char *)s2);
    }
}

int main()
{
    char s1[] = "Hola";
    char s2[] = "casa";

    printf("Mi función %d\n", ft_strncmp(s1, s2, 2));
    printf("La función %d", strncmp(s1, s2, 2));

}