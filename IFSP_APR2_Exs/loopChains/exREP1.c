#include <stdio.h>

int main(){
    int i = 0;

    while (i <= 99) {
        i++;
        if (!(i%3 == 0) && !(i%7 == 0)) {
            printf("%d\n", i);
        }
    }

    return 1;
}