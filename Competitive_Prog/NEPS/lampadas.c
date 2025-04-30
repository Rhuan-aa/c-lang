#include <stdlib.h>
#include <stdio.h>

int revert_lamp(int lamp){
    return lamp == 1 ? 0 : 1;
}

int main(int argc, char const *argv[]) {
    int lamp_a = 0, lamp_b = 0, N = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int input;
        scanf("%d", &input);
        
        lamp_a = revert_lamp(lamp_a);

        if (input == 2) {
            lamp_b = revert_lamp(lamp_b);
        }
    }
    
    printf("%d\n", lamp_a);
    printf("%d", lamp_b);

    return 0;
}
