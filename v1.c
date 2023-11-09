#include <stdio.h>

int pom(int arg, int delilac){
    int temp = arg;
    int pwr = 1;
    while(temp != 0){
        int cif = temp % 10;
        if(cif % delilac != 0){
            arg = arg / pwr % 10;
            pwr *= 10;
        }
        temp/=10;
    }
    return arg;
}
int main() {
    char c;
    int broj = 0;

    while((c = getchar()) != EOF) {
        if(c >= '0' && c <= '9'){
            broj = broj * 10 + (c - '0');
        }
        else{
            int rez = pom(broj, 3);
            if(broj == rez){
                printf("%d ", rez);
            }
            broj = 0;
            if(c == '\n'){
                break;
            }

        }
    }

    return 0;
}
