// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// int main() {
//     int p;
//     pid_t getpid(void);
//     printf("\n%d\n\n", getpid());
//     system("ps");
//     p = fork();
//     if (p == 0) {
//         printf("\nThis is the child Process with ID %d", getpid());
//         printf("\nIts Parent Process is %d", getppid());
//         exit(0);
//     } else {
//         printf("\nThis is the parent process with ID %d", getpid());
//     }
//     puts("\nEnd\n");
//     return 0;
// }
