#include <stdio.h>
int main(){

    char character;
    
    printf("enter the character:");
    scanf("%c", &character);

   
    if (character>='a'&& character<='z') {
        printf("the character is lowercase alphabet");
    }
     else if (character>='A' && character<='Z'){
        printf("the character is an uppercase alphabet");
    }
     else if (character>=0 && character<=9) {
        printf("the character is a digit");
    } 
    else {
        printf("the character is a special character");
    }
     return 0;
}