#include<stdio.h>

int delta (int a, int b, int c){
    int x= (b*b)- (4*a)- (4*c);
return x;
}

int main (){
    int a, b, c, x;
    scanf ("%d %d %d", &a, &b,&c);
    x=delta (a,b,c);
    printf ("%d\n", x);
return 0;
}
