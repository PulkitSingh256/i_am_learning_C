#include <stdio.h>

int main(){
    int a;

    a = getchar();
    if(a>=65 && a<=90){
        printf("%c is in between A-Z\n",a);
    }
    else if(a>=97 && a<=122){
        printf("%c is in between a-z\n", a);
    }
    else if(a>=48 && a<=57){
        printf("%c is in between 0-9\n",a);
    }
    else if((a>=0 && a<=47)||(a>=58 && a<=64)){
        printf("%c is a special charecter\n",a);
    }
    else if((a>=91 && a<=96)||(a>=123 && a<=127)){
        printf("%c is a special charecter\n",a);
    }
    else
    {
        printf("I Dont Understand This charecter %c\n",a);
    }


}
