#include <string.h>
#include <stdio.h>

int main()
{
char s[1000];
unsigned i;
printf("Enter a string: ");
scanf("%s", s);
i = strlen(s);
printf("Length of string: %d \n", i);
return 0;
}
