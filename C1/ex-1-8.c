#include <stdio.h>

/* count lines in input */
main() {
    FILE *fp;
    int c, b, t, nl;

    fp = freopen("../resources/file.txt", "r", stdin);

    b = t = nl = 0;
    while ((c = fgetc(fp)) != EOF) {
        if (c == ' ')
            ++b;
        if (c == '\t')
            ++t;
        if (c == '\n')
            ++nl;
    }

    printf("b = %d, t = %d, nl = %d\n", b, t, nl);

    fclose(fp);
}
