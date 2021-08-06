#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* selectRandomLine(char* path  ){
    srand(time(NULL));
    
    
    FILE* file =  fopen("paises.txt", "r"); 
    char currentLine[100];

    //int x = 0;
    

    while (  fscanf( file, "%s", currentLine ) != EOF  )
    {
        int x = rand()%20;
        if(x==rand()%20){
            
            printf("word:%s\n", currentLine);
            break;
            
        }
        
    }   
   
    fclose(file);  
      
    return currentLine;
}