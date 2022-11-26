#include<stdio.h>

main(){
	
	int a;
	int n;
	int factorial = 1;
	
			printf("Enter the value: ");
			scanf ("%d",&n);
			
			
	for(a = 1; a<=n; a++){
		
			factorial = factorial * a;		
		
	}
	
	
			printf("%d", factorial);
	
}
