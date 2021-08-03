#include <stdio.h>

/* copy input to output; 1st version */
//Ctl + D = EOF

int main() {
    char c;

    c = (char) getchar();
    while (c != EOF) {
        putchar(c);
        c = (char) getchar();
    }
    return 0;
}

//#include <stdio.h>
//
//int main() {
//    int c;
//
//    while ((c = getchar()) != '\n') putchar(c);
//    printf("\nEOF = %i", EOF);
//    printf("\n(EOF == -1) is %i (true)", (EOF == -1));
//    printf("\n(EOF != -1) is %i (false)", (EOF != -1));
//    return 0;
//}
