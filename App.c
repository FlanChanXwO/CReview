#include<stdio.h>

main() {
    int i, j;
    char x[6] = {'h', 'e', 'l', 'l', 'o', '\0'}, t;
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
            if (x[i] < x[j])
                t = x[i], x[i] = x[j], x[j] = t;
    printf("%s", x);
}