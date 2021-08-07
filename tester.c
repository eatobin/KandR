//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//    // This pointer will hold the
//    // base address of the block created
//    int *ptr;
//    int n, i;
//
//    // Get the number of elements for the array
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//    printf("Entered number of elements: %d\n", n);
//
//    // Dynamically allocate memory using malloc()
//    ptr = (int *) malloc(n * sizeof(int));
//
//    // Check if the memory has been successfully
//    // allocated by malloc or not
//    if (ptr == NULL) {
//        printf("Memory not allocated.\n");
//        exit(0);
//    } else {
//
//        // Memory has been successfully allocated
//        printf("Memory successfully allocated using malloc.\n");
//
//        // Get the elements of the array
//        for (i = 0; i < n; ++i) {
//            ptr[i] = i + 1;
//        }
//
//        // Print the elements of the array
//        printf("The elements of the array are: ");
//        for (i = 0; i < n; ++i) {
//            printf("%d, ", ptr[i]);
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//    // This pointer will hold the
//    // base address of the block created
//    int *ptr, *ptr1;
//    int n, i;
//
//    // Get the number of elements for the array
//    n = 5;
//    printf("Enter number of elements: %d\n", n);
//
//    // Dynamically allocate memory using malloc()
//    ptr = (int *) malloc(n * sizeof(int));
//
//    // Dynamically allocate memory using calloc()
//    ptr1 = (int *) calloc(n, sizeof(int));
//
//    // Check if the memory has been successfully
//    // allocated by malloc or not
//    if (ptr == NULL || ptr1 == NULL) {
//        printf("Memory not allocated.\n");
//        exit(0);
//    } else {
//
//        // Memory has been successfully allocated
//        printf("Memory successfully allocated using malloc.\n");
//
//        // Free the memory
//        free(ptr);
//        printf("Malloc Memory successfully freed.\n");
//
//        // Memory has been successfully allocated
//        printf("\nMemory successfully allocated using calloc.\n");
//
//        // Free the memory
//        free(ptr1);
//        printf("Calloc Memory successfully freed.\n");
//    }
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

int main() {

    // This pointer will hold the
    // base address of the block created
    int *ptr;
    int n, i;

    // Get the number of elements for the array
    n = 5;
    printf("Enter number of elements: %d\n", n);

    // Dynamically allocate memory using calloc()
    ptr = (int *) calloc(n, sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    } else {

        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");

        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }

        // Get the new size for the array
        n = 10;
        printf("\n\nEnter the new size of the array: %d\n", n);

        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, n * sizeof(int));

        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");

        // Get the new elements of the array
        for (i = 5; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }

        free(ptr);
    }

    return 0;
}


////* typeSize.c -- prints out type sizes */
//#include <stdio.h>
//
//int main() {
//    /* c99 provides a %zd specifier for sizes */
//    printf("Type int has a size of %zd bytes.\n", sizeof(int));
//    printf("Type char has a size of %zd bytes.\n", sizeof(char));
//    printf("Type EOF has a size of %zd bytes.\n", sizeof(EOF));
//    printf("Type long has a size of %zd bytes.\n", sizeof(long));
//    printf("Type long long has a size of %zd bytes.\n",
//           sizeof(long long));
//    printf("Type double has a size of %zd bytes.\n",
//           sizeof(double));
//    printf("Type long double has a size of %zd bytes.\n",
//           sizeof(long double));
//    printf("Type float has a size of %zd bytes.\n", sizeof(float));
//    int a = 0;
//    double d = 10.21;
//    printf("0 + 10.21 (%f) has a size of %zd bytes.\n", (a + d),
//           sizeof(a + d));
////    printf("%f", a + d);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    FILE *fp;
//    printf("This text is redirected to stdout\n");
//    fp = freopen("../resources/file.txt", "w+", stdout);
//    printf("This text is redirected to file.txt from Eric and Karen!\nWho is in Seattle now!\nHome soon...\nResources!\n");
//    fclose(fp);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    FILE *fp;
//    int c;
//
//    fp = fopen("file.txt", "r");
//    while (1) {
//        c = fgetc(fp);
//        if (feof(fp)) {
//            break;
//        }
//        printf("%c", c);
//    }
//    fclose(fp);
//    return 0;
//}
