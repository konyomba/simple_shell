#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
	size_t k = 10;
	char *buf;
	
	buf= malloc(sizeof(char) * 10);
	printf ("Your  name please");
	getline(&buf, &k, stdin);
	printf("I go by the name  %s\n", buf);
	printf("Buffer size: %ld\n", k);

	free(buf);

	return (0);
}

