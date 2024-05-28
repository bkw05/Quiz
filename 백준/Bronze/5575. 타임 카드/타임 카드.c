#include <stdio.h>

int main(void){
    int a[3], b[3];
    int h, m, s, as, bs, am, cs;
    
    for(int i = 0; i < 3; i++){
    scanf("%d %d %d  %d %d %d", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);
       as = a[0]* 3600 + a[1]* 60 + a[2];
       bs = b[0]* 3600 + b[1]* 60 + b[2];
       cs = bs - as;
        
       h = cs / 3600;
       cs %= 3600;
        
       s = cs % 60;
       m = cs / 60;
        
       printf("%d %d %d \n", h, m, s);
        
       
    } return 0;
}