#include<stdio.h>

func(int x) {
    x = 10;
    printf("%d, ", x);
}

void main() {
    int x = 20;
    func(x);
    printf("%d", x);
}