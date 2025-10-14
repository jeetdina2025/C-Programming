#include <stdio.h>
#include <string.h>

int main() {
     int n = 3;
    char books[3][50];
    char *ptr[n];

    printf("Enter names of three books:\n");
    for (int i = 0; i < n; i++) {
        gets(books[i]);
        ptr[i] = books[i];
    }

    printf("\n \n You entered these book names:\n\n");
    for (int i = 0; i < n; i++) {
        printf("%s \n", ptr[i]);
    }

    return 0;
}
