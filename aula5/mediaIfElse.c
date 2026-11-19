#include <stdio.h>
#include <math.h> 

int main() {
    float n1, n2, m;
   
    printf("Dígite a sua primeira nota: ")
    scanf("%f", &n1)
   
    printf("Dígite a sua segunda nota: ")
    scanf("%f", &n2)
    
    m = (n1 + n2 ) / 2 
    
    if(m > 6){
        printf("Você passou")
    } else {
        printf("Você não passou")
    }
    return 0;
}