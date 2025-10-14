#include <stdio.h>
#include <string.h>


void main() {
    char name[100];
    int n;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter full name %d: ", i + 1);
        gets(name);


        char *ptr = name;

        char *lastSpace = NULL;


        for (char *p = name; *p; *p++) {
            if (*p == ' ') {
                lastSpace = p;
            }
        }
        if (lastSpace == NULL) {

            printf("%s", name);
            printf("\n");
            continue;
        }


        while (ptr < lastSpace) {
            if (ptr == name || *(ptr - 1) == ' ') {
                printf("%c. ", *ptr);
            }
            ptr++;
        }


        printf("%s", lastSpace + 1);
        printf("\n");
    }


}
