#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char* encodeCountry( char* pais, int*AdressVariable ){
    // int currentPoint = 0 ;
    //srand(time(NULL));
    char* encodedCountry = "********";
    int len2= strlen(encodedCountry);
    int len = strlen(pais); 
    


    char* tempEncoded = (char*)malloc(sizeof(char)*len);
    for (int i = 0; i < len; i++){
        tempEncoded[i] = '*';
    }

    int ocultar = rand()%len; 

    for (int i = 0; i < ocultar; i++){
        int ocultar = rand()%len;
        tempEncoded[ocultar] = pais[ocultar];  
        encodedCountry = tempEncoded;
        return encodedCountry;
    }
   
}