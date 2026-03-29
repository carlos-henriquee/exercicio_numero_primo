#include <stdio.h>

int main() {
    int n;
    int aux1 = 0;
    int aux2 = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        if(n%i==0) {
            aux1++;
        }else{
            aux1;
        }
    }
    
    
    if(aux1==2) {
        printf("Primo\n");
    }else{
        printf("Nao primo\n");
    }
    
    for(int a = n-1; a >= 1; a--) {
        for(int b = a; b >= 1; b--) {
            if(a%b==0) {
                aux2++;
            }
        }
        if(aux2==2){
            printf("%d\n", a);
            aux2 = 0;
        }else{
            aux2 = 0;
        }
    }
    
    
    return 0;
}
