#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/random.h>

void* play_beep_th(void* arg)
        {
    (void)arg;
    pthread_detach(pthread_self());
    pid_t pid = fork();
    if (pid == 0) {
        execl("/usr/bin/play", "play", "-q", "-n", "synth", "0.15", "sin", "750", "fade", "q", "0", "0.15", "0.1", (char *)NULL);
        _exit(1);
    } else if (pid > 0) {
        waitpid(pid, NULL, 0);
    }
    return NULL;
}

void beep()
{
    
    pthread_t thread_id;
    if (pthread_create(&thread_id, NULL, play_beep_th, NULL) != 0) {
        perror("cannot open thread");
    }
    usleep(150000);
}

void
sclear()
{
    write(1, "\033[2J\033[H", 7);
}

int
lrand(int min, int max)
{
    unsigned int rb; 
    if( getrandom(&rb, sizeof(rb), 0) == -1) { return min; }
    unsigned int r = (unsigned int)(max - min + 1);
    unsigned int result = (rb % r) + (unsigned int)min;
    return (int)result;
}
