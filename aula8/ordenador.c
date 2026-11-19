#include <stdio.h>

int main()
{
    int n[5];
    for (int i = 0; i < 5; i ++){
        printf ("Digite um valor: ");
        scanf  ("%d", &n[i]);
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            
            if (n[j] > n[j + 1]) {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
            
        }
    }
        
    for (int i = 0; i < 5; i ++) {
        printf("%dº - %d\n", i+1, n[i]);
    }
    
    return 0;
}