#include <stdio.h>
#include <unistd.h>
#include <malloc.h>

void dance() {
    printf("^0^\"\r");
    fflush(NULL);
    usleep(300000);
    printf("^v^ \r");
    fflush(NULL);
    usleep(300000);
}

void readFile(char *filename, char *lines, unsigned short *lineNum) {
    FILE *fileVar;
    char c = 0;
    unsigned short i = 0;

    fileVar = fopen(filename, "r");

    fseek(fileVar, 0, SEEK_END);
    *lineNum = ftell(fileVar);
    lines = malloc(sizeof(char) + (*lineNum + 1));

    fseek(fileVar, 0, SEEK_SET);

    while (EOF != (c = fgetc(fileVar))) {
        lines[i] = c;
        i += 1;
    }

    lines[i] = '\0';

    fclose(fileVar);
}

int main() {
    char *miku1 = NULL;
    char *miku2 = NULL;
    unsigned short lines1 = 0;
    unsigned short lines2  = 0;
    unsigned short k = 0;

    printf("MIKU DANCE\n\n");

    readFile("C:/Users/mango/Desktop/dancing_Miku/miku1.txt", miku1, &lines1);
    readFile("C:/Users/mango/Desktop/dancing_Miku/miku2.txt", miku2, &lines2);

    k = lines1 < lines2 ? lines1 : lines2;

    for (unsigned int i = 0; i < 20; i += 1) {
        printf("%s\r", miku1);
        fflush(NULL);
        usleep(300000);
        printf("%s\r", miku2);
        fflush(NULL);
        usleep(300000);
    }

    return 0;
}
