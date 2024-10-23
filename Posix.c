#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>   // For fork(), getpid() 
#include <sys/wait.h> // For wait() 
 
int main() 
{ 
    pid_t pid = fork(); // Create a child process 
 
    if (pid < 0) 
    { 
        // Fork failed 
        perror("Fork failed"); 
        exit(EXIT_FAILURE); 
    } 
    else if (pid == 0) 
    { 
        // Child process 
        printf("Hello from Child! PID: %d\n", getpid()); 
        exit(0); // Child exits 
    } 
    else 
    { 
        // Parent process 
        printf("Hello from Parent! PID: %d\n", getpid()); 
 
        int status; 
        wait(&status); // Wait for the child to finish 
 
        if (WIFEXITED(status)) 
        { 
            printf("Child exited with status: %d\n", WEXITSTATUS(status)); 
        } 
    } 
 
    return 0; 
}
output:
Hello from Parent! PID: 17958
Hello from Child! PID: 17959
Child exited with status: 0