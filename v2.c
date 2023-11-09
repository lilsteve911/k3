#include <stdio.h>
#include <stdlib.h>

char veliko(char c) {
    if(c>= 'a' && c <= 'z'){
        return c - 'a' + 'A';
    }
    return c;
}

int main()
{
    char c;
    char p;
    int broj = 0;
    int zbir = 0;

    while((c = veliko(getchar())) != '\n')
    {

        if(c == p)
        {
            zbir += broj;
            broj = 0;
        }
        else{

            if (c >= '0' && c <= '9')
            {
                broj = broj * 10 + (c-'0');
            }
            else
            {
                p = c;
                broj = 0;
            }
        }
    }
    printf("%d",zbir);
    return 0;
}
