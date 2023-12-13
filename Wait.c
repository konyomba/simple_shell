#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * wait - suspends execution until child terminates the process
 *
 * Return: To return always(0).
 */

int main(void)
{
    pid_t child_pid;
    int status;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Ooops!something went wrong.:");
        return (1);
    }
    if (child_pid == 0)
    {
        printf("You will be waiting for 1,2 3.....100 milliseconds\n");
        usleep(100);
    }
    else
    {
        wait(&status);
        printf("You are good to go now,Thank you for your patience.\n");
    }
    return (0);
}
