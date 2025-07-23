

#include <stdio.h>

int main() {
    int a, b, c, grand;
    scanf("%d %d %d",&a, &b,&c );
    if(a>b && a>c ){
        grand = a;
    }else if( b>a && b>c){
        grand = b;
    }else{
        grand = c;
    }

        printf("Le plus grand nombre est : %d\n", grand);
    

    return 0;// fin du programme 
}
