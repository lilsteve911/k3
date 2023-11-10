
#include <stdio.h>
#include <stdlib.h>

char malo(char c) {
    if(c>= 'A' && c <= 'Z'){
        return c + ('a' - 'A');
    }
    return c;
}

int main()
{
    int n;
    int brojac = 0;

    scanf("%d", &n);

    if(n % 2 == 0) {
        for (int y = 1; y <= n/2; y++) {
            for (int x = 0; x < n; x++) {

                if(x == n/2 - y || x == n/2 + y - 1 ){
                    if(x < brojac){
                        putchar(malo('A' + brojac));
                        continue;
                    }
                    putchar(malo('A' + x));

                }
                else {
                    if(x < brojac){
                        putchar(('A' + brojac));
                        continue;
                    }
                    putchar('A' + x);
                }
            }
            printf("\n");
            brojac ++;
        }
        for(int y1 = 1; y1 <= n/2; y1++){
            for(int x1 = 0; x1 < n; x1++){
                if(x1 == n - y1 || x1 == y1 - 1){
                    if(x1 < brojac){
                        putchar(malo('A' + brojac));
                        continue;
                    }
                    putchar(malo('A' + x1));
                }
                else {
                    if(x1 < brojac){
                        putchar(('A' + brojac));
                        continue;
                    }
                    putchar('A' + x1);
                }
            }
            printf("\n");
            brojac++;
        }
    }
    else{
        for (int y = 0; y < (n + 1)/2 ; y++) {
            for (int x = 0; x < n; x++) {

                if(x == n/2 - y || x == n/2 + y){
                    if(x < brojac){
                        putchar(malo('A' + brojac));
                        continue;
                    }
                    putchar(malo('A' + x));

                }
                else {
                    if(x < brojac){
                        putchar(('A' + brojac));
                        continue;
                    }
                    putchar('A' + x);
                }
            }
            printf("\n");
            brojac ++;
        }
        for(int y1 = 1; y1 <= (n+1)/2 - 1; y1++){
            for(int x1 = 0; x1 < n; x1++){
                if(x1 == y1  || x1 + 1 == n - y1){
                    if(x1 < brojac){
                        putchar(malo('A' + brojac));
                        continue;
                    }
                    putchar(malo('A' + x1));
                }
                else {
                    if(x1 < brojac){
                        putchar(('A' + brojac));
                        continue;
                    }
                    putchar('A' + x1);
                }
            }
            printf("\n");
            brojac++;
        }
    }
    return 0;
}
