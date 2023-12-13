#include <stdio.h>
#include <unistd.h>
/**
 * fork - show my pid the process id
 * @getpid- a funnction that shows  myn pid
 * return(0)
 */

int main(void)
{
	printf("%u that is my latest process id(pid)\n", getpid());   
	
	return(0);
}
