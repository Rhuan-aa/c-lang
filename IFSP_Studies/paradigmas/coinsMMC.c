#include <stdio.h>
#include <stdlib.h>

int countChange(int value, int coins[], int size){
    int num_coins = 0;
    int val = value;
    while(val != 0){
        int best_coin = bestCoin(val, coins, size);
        val -= best_coin;
        num_coins++;
        printf("teste");
    }
    return num_coins;
}

int bestCoin(int value, int coins[], int size){
    int bcoin_index = size - 1;
    int best_coin = countMMC(value, coins[bcoin_index]);
    for (int i = size - 2; i > 0; i--){
        if(coins[i] <= value){
            int coin = countMMC(value, coins[i]);
            if (coin <= best_coin){
                bcoin_index = i;
                best_coin = coin;
            }
        }
    }
    if(best_coin > countMMC(value, coins[0])){
        bcoin_index = 0;
    }
    return coins[bcoin_index];
}

int countMMC(int num1, int num2) {
    int mmc, aux, i;

    for (i = 2; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            i = num2 + 1;
        }
    }
    return mmc;
}

int main(int argc, char const *argv[]){
    int n;
    int coins[] = {1, 5, 10, 25};
    scanf("%d", &n);
    int r = countChange(n, coins, 4);

    printf("%d\n", r);

    return 0;
}