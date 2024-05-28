#include <stdio.h>

int main(void){
    int n, m;
    int d[101] = {0};
    int a, b, c;
    
    scanf("%d %d", &n, &m);
    
     for(int i = 0; i < m; i++) {
       scanf("%d %d %d", &a, &b, &c);
         
     for(int k = a; k <= b; k++) {
      d[k] = c;
       }
     }

     for(int i = 1; i <= n; i++) {
      printf("%d ", d[i]);
     }
     return 0;
}