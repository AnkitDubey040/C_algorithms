#include <stdio.h> 
int main() 
{ 
	int x,y;
	
        printf("Enter numbers to swap");
	
	scanf("%d %d",&x,&y); /*Takes input*/
	
	printf("Numbers before swapping are x = %d and y = %d",x,y);
	x = x + y;
	y = x - y; 
	x = x - y; 

	printf("Numbers after swapping are x = %d, y = %d", x, y); 

	return 0; 
} 
