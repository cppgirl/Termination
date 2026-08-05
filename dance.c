#include <stdio.h>
#include <unistd.h>

void dance() {
    printf("^0^\"\r");
    fflush(NULL);
    usleep(300000);
    printf("^v^ \r");
    fflush(NULL);
    usleep(300000);
}

int main() {
    printf("Hi\n");

    for (unsigned int i = 0; i < 20; i += 1) {
        dance();
    }

    return 0;
}
