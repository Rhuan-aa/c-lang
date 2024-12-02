/*Escrever um programa que, dado um ano qualquer, verifica se ele é bissexto ou não. Seu programa deve escrever como 
saída o número 1 se o ano for bissexto, e 0 caso contrário. Se o ano for inválido escreva -1.

- São bissextos todos os anos múltiplos de 400, p.ex: 1600, 2000, 2400, 2800…
- São bissextos todos os múltiplos de 4 e não múltiplos de 100, p.ex: 1996, 2004, 2008, 2012, 2016…
- Não são bissextos todos os demais anos.
*/


int main(int argc, char const *argv[]){
    int year;

    printf("Digite o ano ser avaliado: ");
    scanf("%d", &year);
    
    if (year < 0){
        printf("-1\n");
    } else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
