#include <stdio.h>

/* copy input to output; 1st version */
//Ctl + D = EOF

//int main() {
//    FILE *fp;
//    char c;
//
//    fp = freopen("../resources/file.txt", "r", stdin);
//
//    c = (char) fgetc(fp);
//    while (c != EOF) {
//        putchar(c);
//        c = (char) fgetc(fp);
//    }
//    fclose(fp);
//    return 0;
//}

int main() {
    FILE *fp;
    int c;

    fp = freopen("../resources/file.txt", "r", stdin);

    c = fgetc(fp);
    while (c != EOF) {
        putchar(c);
        c = fgetc(fp);
    }
    fclose(fp);
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
