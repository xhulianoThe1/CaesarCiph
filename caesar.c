
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char* argv[]) { 
	//initialize key to 0 and the manipulate based on CLA 
   int key = 0; 
   //If CLA isnt equal to 3 then you cant do this program
   if(argc!=3)  { 
        printf("\nInvalid amount of command line args "); 
    } 
		
	else { 
			
			//the first argument inputted is equal to the key var 
			key = atoi(argv[1]); 
			int i = 0;
			//Message for inputted text
			char msg[100];
			printf("Enter a Mesage: ");
			scanf ("%[^\n]%*c", msg);
			printf("Your inputted text is: %s\n", msg);
		
		//If the second argument is equal to e then do this 	 
		if (*argv[2] == 'e'){ 
		//FOr loop that performs caesar ciph for encryption 
			for(i = 0; i < strlen(msg); i++){ 
				if (isalpha(msg[i])){		
					printf("%c\n", ((((msg[i] - 65) + key) % 26) + 65));
				} 
			} 	
		} 
			
		//If second arg isnt equal to e and in this case d then do this
		else { 
		//FOr loop for decrypting
			for(i = 0; i < strlen(msg); i++){ 
				if (isalpha(msg[i])){			
					printf("%c\n", ((((msg[i] - 65) - key) % 26) + 65));
			} 
		}		 			
	 } 
	} 
	   return 0; 
 } 