#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    pid = fork();

    if (pid == 0)
    {
        printf("Child executing ls command\n");
        execl("/bin/ls", "ls", "-l", NULL);
    }
    else
    {
        printf("Parent Waiting...\n");
        wait(NULL);
        printf("Child Finished Execution\n");
    }
    return 0;
}
