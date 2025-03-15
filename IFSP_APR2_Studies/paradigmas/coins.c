#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int countChange(int val, int coins[], int m){
    int num_coins = 0;
    while(val != 0){
        int best_coin = bestCoin(val, coins, m);
        val = val - best_coin;
        num_coins++;
    }
    return num_coins;
}

int bestCoin(int val, int coins[], int m){
    int best_coin = 0;
    int best_coin_mmc = INT_MAX;
    for(int i = 0; i < m; i++){
        if(coins[i] >= val){
            int mmc_coin = mmc(val, coins[i]);
            if(coins[i] > best_coin && mmc_coin <= best_coin_mmc){
                best_coin = coins[i];
                best_coin_mmc = mmc_coin;
            }
        }
    }
    return best_coin;
}

int mmc(int num1, int num2) {

    int resto, a, b;

    a = num1;
    b = num2;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return ( num1 * num2) / a;
}

int main(int argc, char const *argv[]){
    int n;
    int coins[] = {1, 5, 10, 25};
    scanf("%d", &n);
    int r = countChange(n, coins, 4);

    printf("%d\n", r);

    return 0;
}