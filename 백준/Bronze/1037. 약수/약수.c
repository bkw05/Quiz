
#include <stdio.h>

int main(void){
    int num;
    long long N;
    long long min, max;
    
    scanf("%d", &num);
     for(int i = 0; i < num; i++){
         scanf("%lld", &N);
         if(i == 0){
             min = max = N;
         }
         else{
             if(N < min){
                 min = N;
             }
             else if(N > max){
                 max = N;
             }
         }
     }
    printf("%lld", min*max);
    
    return 0;
}