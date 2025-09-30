#include <stdio.h>

void main() {
    int a[100], count = 0;
    int choice, subchoice, ele, pos, i;


    while (1) {
        printf("Enter value %d (-999 to stop): ", count + 1);
        scanf("%d", &a[count]);
        if (a[count] == -999) {
            break;
        }
        count++;
        if (count == 100) {
            printf("Array full.\n");
            break;
        }
    }

    while (1) {
        printf("\nMain Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("Exiting program.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("\nInsert Menu:\n");
                printf("1. Insert at front\n");
                printf("2. Insert at middle (position)\n");
                printf("3. Insert at end\n");
                printf("Enter your choice: ");
                scanf("%d", &subchoice);

                if (subchoice < 1 || subchoice > 3) {
                    printf("Invalid insertion choice.\n");
                    break;
                }

                if (count == 100) {
                    printf("Array full. Cannot insert.\n");
                    break;
                }

                printf("Enter value to insert: ");
                scanf("%d", &ele);

                switch (subchoice) {
                    case 1:
                        for (i = count; i > 0; i--) {
                            a[i] = a[i - 1];
                        }
                        a[0] = ele;
                        count++;
                        break;

                    case 2:
                        printf("Enter position to insert at (1 to %d): ", count + 1);
                        scanf("%d", &pos);
                        if (pos < 1 || pos > count + 1) {
                            printf("Invalid position.\n");
                            break;
                        }
                        for (i = count; i >= pos; i--) {
                            a[i] = a[i - 1];
                        }
                        a[pos - 1] = ele;
                        count++;
                        break;

                    case 3:
                        a[count] = ele;
                        count++;
                        break;
                }
                break;

            case 2:
                if (count == 0) {
                    printf("Array is empty. Nothing to delete.\n");
                    break;
                }

                printf("\nDelete Menu:\n");
                printf("1. Delete from front\n");
                printf("2. Delete from middle (position)\n");
                printf("3. Delete from end\n");
                printf("Enter your choice: ");
                scanf("%d", &subchoice);

                if (subchoice < 1 || subchoice > 3) {
                    printf("Invalid deletion choice.\n");
                    break;
                }

                switch (subchoice) {
                    case 1:
                        for (i = 0; i < count - 1; i++) {
                            a[i] = a[i + 1];
                        }
                        count--;
                        break;

                    case 2:
                        printf("Enter position to delete (1 to %d): ", count);
                        scanf("%d", &pos);
                        if (pos < 1 || pos > count) {
                            printf("Invalid position.\n");
                            break;
                        }
                        for (i = pos - 1; i < count - 1; i++) {
                            a[i] = a[i + 1];
                        }
                        count--;
                        break;

                    case 3:
                        count--;
                        break;
                }
                break;

            default:
                printf("Invalid main menu choice.\n");
                break;
        }

        if (count == 0) {
            printf("Array is empty.\n");
        } else {
            printf("Current array: ");
            for (i = 0; i < count; i++) {
                printf("%d\t", a[i]);
            }
            printf("\n");
        }
    }
}

