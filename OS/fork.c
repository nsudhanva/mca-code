#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
int main()
{
    printf("Parent process\n");
    printf("Parent process ID: %d\n", getpid());
    int a = fork();
    printf("Child Process ID: %d", a);

    printf("Child Process\n");
    printf("Child Process ID: %d\n", getpid());
    printf("Parent Process ID in Child Process: %d", getppid());
}

