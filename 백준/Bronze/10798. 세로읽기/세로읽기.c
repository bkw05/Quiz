#include <stdio.h>

int main(void){
    int i, j; 
    char a[5][16] = {0};

    for(i = 0; i < 5; i++){ 
        scanf("%s", a[i]);  
    }

    for(i = 0; i < 15; i++){  
        for(j = 0; j < 5; j++){  
            if (a[j][i] != '\0'){  
                printf("%c", a[j][i]); 
            }
        }
        
    }
    return 0; 
}

