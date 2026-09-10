#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Before exec()\n");
    execl("/bin/ls", "ls", "-l", NULL);
    printf("This statement never executes\n");
    return 0;
}
