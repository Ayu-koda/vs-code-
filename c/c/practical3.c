// #include <stdio.h>
// #include <stdlib.h>
// #include <sys/wait.h>
// #include <unistd.h>

// int main() {
//     pid_t child_pid = fork();
//     if (child_pid < 0) {
//         perror("Fork failed");
//         return 1;
//     } else if (child_pid == 0) {
//         printf("Child process calculating length of name.\n");
//         execlp("wc", "wc", "-m", NULL);
//         perror("execlp failed");
//         return 1;
//     } else {
//         printf("Parent process waiting for the child.\n");
//         FILE *child_stdin = popen("wc -m", "w");
//         if (child_stdin) {
//             fprintf(child_stdin, "mapple");
//             pclose(child_stdin);
//         } else {
//             perror("popen failed");
//         }
//     }
//     wait(NULL);
//     printf("Child process has finished.\n");
//     return 0;
// }
