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

