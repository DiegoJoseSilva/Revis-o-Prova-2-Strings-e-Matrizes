#include<stdio.h>
#include<strings.h>
#include<cstring>
int main (){

    char palavra [20];
    int x;

    scanf ("%s", palavra);

    x=  strlen(palavra);

    for (int i=x; i>=0; i--){
        printf ("%c", palavra [i]);
    }
    printf ("\n");

return 0;
}
