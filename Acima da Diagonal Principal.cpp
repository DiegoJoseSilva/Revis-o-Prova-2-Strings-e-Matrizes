#include <stdio.h>
#include <string.h>
#include<cstring>

double Soma (double Matriz[12][12]){
    double soma=0;
    for (int i=0; i<12; i++){
        for (int j= i+1; j<12; j++){
            soma= soma + Matriz [i][j];
        }
    }
    printf ("%.1lf\n", soma);
    return 0;
}

double Media (double Matriz [12][12]){
    int c=0;
    double soma=0;
    for (int i=0; i<12; i++){
        for (int j= i+1; j<12; j++){
            soma= soma + Matriz [i][j];
            c++;
        }
    }
    double x;
    x= soma/c;
    printf ("%.1lf\n", x);

return 0;
}

int main() {

    double Matriz [12][12];
    char o [2];
    int i=0, j=0;
    scanf (" %s", &o);

    for (i=0; i<12;i++){
        for (j=0; j<12; j++){
            scanf ("%lf", &Matriz [i][j]);
        }
    }
    if (strcmp(o, "S")==0){
        Soma (Matriz);
    }else if(strcmp(o, "M")==0){
        Media (Matriz);
    }
    return 0;
}
