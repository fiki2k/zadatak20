// Program ce unesen string napisat sve malim slovima.

#include<stdio.h>
#include<string.h>
int main(){
   
   char polje[50];
   int i;
   printf("Unesi string: ");
   scanf("%s",polje);
 
	// naredba strlen nam da duljinu stringa kao ju neznamo. 
   for(i=0;i<=strlen(polje);i++){
      if(polje[i]>=65&&polje[i]<=90)
         polje[i]=polje[i]+32;
   }
   printf("\nDani string napisan malim slovima je: %s",polje);
   return 0;
}
