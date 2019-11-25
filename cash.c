 #include <stdio.h>

void Change(int totCents, int *quarters, int *dimes, int *nickels, int *pennies) { 
	*quarters = totCents / 25; 
	*dimes = (totCents - *quarters * 25) / 10;
	*nickels = ((totCents - *quarters * 25) % 10) /5;
	*pennies = (((totCents - *quarters * 25) % 10) %5)/1;
	
}

int main(void) {

   int totalCents;         // Total amount of change needed
   int quartersChange;     // Number of quarters used for change
   int dimesChange;        // Number of dimes used for change
   int nickelsChange;      // Number of nickels used for change
   int penniesChange;      // Number of pennies used for change

   printf("Enter total cents: ");
   scanf("%d", &totalCents);

   Change(totalCents, &quartersChange, &dimesChange, &nickelsChange, &penniesChange); 

   printf("Change for %d cents is:\n", totalCents);
   printf("  %d quarters\n", quartersChange);
   printf("  %d dimes\n", dimesChange);
   printf("  %d nickels\n", nickelsChange);
   printf("  %d pennies\n", penniesChange);
   

   return 0;
}
