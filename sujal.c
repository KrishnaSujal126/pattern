#include <stdio.h> 
  
int main() 
{ 
  int i,j,k,Row=5;
    
    for ( i = 0; i < Row; i++) { 
  
        
        for ( j = 0; j < 2 * (Row - i) - 1; j++) { 
            printf(" "); 
        } 
  
        
        for ( k = 0; k <= i; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
    return 0; 
}