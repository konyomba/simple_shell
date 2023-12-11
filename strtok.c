#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "one Word after the other in a new line";
	char delim[5] = " ";
	char *trunks;

	trunks = strtok(str, delim);
	if (trunks != NULL)
	{while ((trunks = strtok(NULL, delim)) != NULL) 
		{printf("%s\n", trunks);
		}
	}
	
	return (0);
}	

