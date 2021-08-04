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

#include <stdio.h>

int main() {
    FILE *fp;
    printf("This text is redirected to stdout\n");
    fp = freopen("../resources/file.txt", "w+", stdout);
    printf("This text is redirected to file.txt from Eric and Karen!\nWho is in Seattle now!\nHome soon...\nResources!\n");
    fclose(fp);
    return 0;
}

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
