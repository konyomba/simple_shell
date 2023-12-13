#include <stdio.h>
#include <unistd.h>

/**
 * main - execve use  to execute
 *
 * Return: Always (0) otherwise error
 */
int main(void)
{
    char *argv[] = {"ls", "-al", NULL};
    char *envv[] ={"NULL"};

    printf("Before execve\n");
    if (execve("/usr/bin/ls", argv, envv) == -2)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
