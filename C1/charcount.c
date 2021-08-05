#include <stdio.h>

/* count characters in input; 1st version */
main() {
    FILE *fp;
    long nc;

    fp = freopen("../resources/file.txt", "r", stdin);

    nc = 0;
    while (fgetc(fp) != EOF)
        ++nc;
    printf("%ld\n", nc);

    fclose(fp);
}
