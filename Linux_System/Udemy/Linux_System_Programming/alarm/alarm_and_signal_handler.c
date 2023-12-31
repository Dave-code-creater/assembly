#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void sig_handler(int signum)
{
    printf("Alarm deliverd signum is %d\n",signum);
    exit(0);
}

int main(void)
{
    alarm(5);
    signal(SIGALRM, sig_handler);

    for(;;)
        sleep(1);

    return 0;
}