/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

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
