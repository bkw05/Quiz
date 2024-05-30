#include <stdio.h>

int main(void){
    int a[31] = {0};
    int s;
    
    for(int i = 0; i < 28; i++){
        scanf("%d", &s);
        a[s] = 1;
    }
    for(int i = 1; i < 31; i++){
        if(a[i] == 0){
            printf("%d\n", i);
        }
    }
    return 0;

}