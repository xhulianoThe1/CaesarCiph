#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char* argv[]) { 
   //key's value will be based on command line argument 
   int key = 0; 
   //Only allow 3 command line arguments 
   if(argc!=3) { 
        printf("\nInvalid amount of command line args "); 
    } 	
       
	//performs if the correct amount of comm line args are inputted 
	else { 		
		key = atoi(argv[1]); 
		int i = 0;
		//Message for inputted text
		char msg[100];
		printf("Enter a Mesage: ");
		scanf ("%[^\n]%*c", msg);
		
		//If the second argument is equal to e then do this 	 
		if (*argv[2] == 'e'){ 		
			//For loop that performs caesar ciph for encryption 
			for(i = 0; i < strlen(msg); i++){ 
				if (isalpha(msg[i])){		
					printf("%c\n", ((((msg[i] - 65) + key) % 26) + 65)); 
				} 
			} 	
		} 
			
		//loop that performs caesar cipher for decrypting
		else { 
			for(i = 0; i < strlen(msg); i++){ 
				if (isalpha(msg[i])){			
					printf("%c\n", ((((msg[i] - 65) - key) % 26) + 65));
			} 
		}		 			
	} 
} 
	   return 0; 
} 
