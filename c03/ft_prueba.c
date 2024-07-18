#include <stdio.h>
#include <string.h>

unsigned int ft_prueba(char *dest, char *src, unsigned int size)
{
	unsigned int i;
    
    i = 0;
	while(*dest && i < size)
	{
		dest++;
		i++;
	}
	while(*src && i + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if(i < size)
		*dest = '\0';
	while(*src)
	{
		src++;
		i++;
    }
    return(i);

}

int main()
{
	char dest[] = "Hola";
	char src[] = "Mundo";
	unsigned int size = 20;
    unsigned int result;
	result = ft_prueba(dest, src, size);
	
	printf("Esta es la longitud de la cadena %u", result);
}