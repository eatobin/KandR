#include <stdio.h>

/* count lines in input */
main() {
    FILE *fp;
    int c, nl;

    fp = freopen("../resources/file.txt", "r", stdin);

    nl = 0;
    while ((c = fgetc(fp)) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);

    fclose(fp);
}
