#include <stdio.h>

int main(void){
    int s;
    char g;
    
  
    scanf("%d", &s);
    
    if(s >= 90 && s <= 100){ 
        g = 'A';
    }
    else if(s >= 80 && s <= 89){ 
        g = 'B';
    }
    else if(s >= 70 && s <= 79){ 
        g = 'C';
    }
    else if(s >= 60 && s <= 69){ 
        g = 'D';
    }
    else {
        g = 'F';
    }
   
    printf("%c", g);
    return 0;
 
}