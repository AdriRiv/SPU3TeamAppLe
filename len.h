#include <stdio.h>


//GLOBAL VARIABLES//

char*EncodedCountry = "************";
char* country = "Mexico";
int points;
int currentPoint = 0 ;


void  modifyVariables( int*AdressVariable){
    *AdressVariable = points;
    return;
}

char* encodeCountry( char*pais, int*AdressVariable ){
    
    srand(time(NULL));
    int len = strlen(country);
    
    char* tempEncoded = (char*)malloc(sizeof(char)*len);   
        for (int i = 0; i < len; i++)
        {
        tempEncoded[i] = '*';
        }

   
    points = rand()%len;
    int ocultar = rand()%len; 
         for (int i = 0; i < points; i++)
        {
        int ocultar = rand()%len;
        tempEncoded[ocultar] = country[ocultar];
        }
    EncodedCountry = tempEncoded;
    int*CurrentPoint = &points;
    modifyVariables(&points);

    printf("Country Name: %s\n", EncodedCountry);
    printf("Current Points:%d\n", points); 
}



