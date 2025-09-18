// #include <fcntl.h>
// #include <stdio.h>
// #include <unistd.h>
// #define buffersize 10000

// int main() {
//     char source[25], dest[25];
//     char buffer[buffersize];
//     int read_in, write_out;
//     printf("\nEnter Source file name : ");
//     scanf("%s", &source);
//     printf("Input File : %s", source);
//     int sourcefiled = open(source, O_RDONLY);
//     if (sourcefiled < 0) {
//         printf("\n Source File not Exist");
//     } else {
//         printf("\nEnter Destination file name : ");
//         scanf("%s", &dest);
//         int destfiled = open(dest, O_WRONLY | O_CREAT);
//         while ((read_in = read(sourcefiled, &buffer, buffersize)) > 0) {
//             write_out = write(destfiled, &buffer, read_in);
//         }
//         close(sourcefiled);
//         close(destfiled);
//     }
//     return 0;
// }
