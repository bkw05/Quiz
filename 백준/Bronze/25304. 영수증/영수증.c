#include <stdio.h>

int main(void){
    
    int x, pn, a, b;
    
    scanf("%d", &x);
    scanf("%d", &pn);
    
    for(int i = 0; i < pn; i++){
        scanf("%d %d\n", &a, &b);
        x -= a * b;
    }
    if(x == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}