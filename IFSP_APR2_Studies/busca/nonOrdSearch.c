
// Busca sequencial ou linear O(n)
int busca(int vet[], int n, int x){
    for(int i = 0; i < n; i++){
        if(vet[i] == x){
            return i;
        }
    }
    return -1;
}

// Busca sequencial ou linear O(n)
int busca(int vet[], int n, int x){
    vet[n] = x;
    int i = 0;

    while(vet[i] != x){
        i++;
    }

    if(vet[i] == x){
        return i;
    }
    
    return -1;
}