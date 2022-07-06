#include <stdio.h>

int main ()
{
	char ch = 'a';

	printf("Lowercase Englis Alphabets:\n");
	while(ch <= 'z')
	{
		printf("%c",ch);
		ch++;
	}
	printf("\n");

	return 0;
}
