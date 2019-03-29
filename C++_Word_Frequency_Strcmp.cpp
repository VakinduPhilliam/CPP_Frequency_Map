//C Program to map word frequency
//Compiled and presented by Vakindu Philliam

#include <stdio.h>
#include <stdlib.h>

 
struct freq

{

    char *x[64];

    int y;

};

 
struct freq array1[100];

 
int main()

{
 
    FILE * input;

    int i,j;

    char tempWord[] ="hello";

    input = fopen("random.txt","r");

 
    for (i=0;i<=10;i++) //go through the 10 elements in text file

    {

        //scan each word into a temporary variable

        // **** NOT COMPLETE, JUST USING TEMPWORD ASSIGNED ABOVE TO CHECK WORKING.
 
        //loop through the existing array to check if the temp value equals a word

        // if it does increment the corresponding counter

        for(j=0;j<=10;j++){

            if(strcmp(array1[j].x, tempWord) == 0){ //if it does equal the scanned word

                array1[j].y++; //increment its count

            }

        }

        //if it doesn't add it to the array

 
        fscanf(input, "%s",array1[i].x);
 

        printf("WORD %i: %s ",i,array1[i].x);

        printf(" COUNT IS: %i", array1[i].y);

        printf("\n");

    }
 
    fclose(input);

    return 0;
}
