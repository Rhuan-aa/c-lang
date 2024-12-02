#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int greedyCoins(int val, int coins[], int m) {
    int num_coins = 0;

    for(int i = m - 1; i >= 0; i--){
        while(val >= coins[i]){
            num_coins++;
            val = val - coins[i];
        }
    }

    return num_coins;
}

int recChange(int val, int coins[], int m){
    int min_coins;
    if (val == 0){
        return 0;
    } else {
        min_coins = val + 1;
        for(int i = m - 1; i >= 0; i--){
            if(val >= coins[i]){
                int t = 1 + recChange(val - coins[i], coins, m);
                if(t < min_coins){
                    min_coins = t;
                }
            }
        }
    }
    return min_coins;
}

int countChange(int val, int coins[], int m){
    int num_coins = 0;
    while(val != 0){
        val = val - bestCoin(val, coins, m);
        num_coins++;
    }
    return num_coins;
}

int bestCoin(int val, int coins[], int m){
    int best_coin = 0, best_coin_mmc = INT_MAX;
    for(int i = 0; i < m; i++){
        if(coins[i] >= val){
            int mmc_coin = mmc(val,coins[i]);
            if(coins[i] > best_coin && mmc_coin <= best_coin_mmc){
                best_coin = coins[i];
                best_coin_mmc = mmc_coin;
            }
        }
    }
    return best_coin;
}

int mdc(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int mmc(int a, int b){
    return a * (b / mdc(a, b));
}

int main(int argc, char const *argv[]){
    int n = atoi(argv[1]);
    int coins[] = {1, 5, 10, 25};

    long r = countChange(n, coins, 4);

    printf("%ld\n", r);

    return 0;
}
