#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>


int indx;
char letter;

bool compareIndexCharacterString(char* country, char Char, int index){
    return country[index-1]== Char ? true:false;

}


void main(){
    srand(time(NULL));

    char* pais= "Mexico";
    printf("Enter a letter to be checked: ");
    scanf("%s", &letter);
    printf("Enter the index you want to check: ");
    scanf("%d",&indx);

    compareIndexCharacterString(pais, letter, indx);


    if (compareIndexCharacterString(pais, letter, indx)==1){
        printf("True\n");
    }else{
        printf("False\n");
    }
    return;
}