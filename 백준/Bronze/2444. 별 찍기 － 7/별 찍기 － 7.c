#include <stdio.h> 

int main(void){ 
    int s; 

    scanf("%d", &s); 

     for (int i = 1; i <= s; i++) {  
        for(int j = 1; j <= s - i; j++){ 
            printf(" ");  
        }
        for(int k = 1; k <= 2 * i - 1; k++){  
            printf("*");  
        }
        printf("\n");
     }

      for(int i = 1; i < s; i++){  
            for(int j = 1; j <= i; j++){ 
                printf(" "); 
            }
            for(int k = 1; k <= 2 * (s - i) - 1; k++){
                printf("*"); 
            }

            printf("\n"); 
        }

        return 0; 
          

     }
