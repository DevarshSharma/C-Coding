// C implementation to
// print swastika pattern
#include <stdio.h>

// function to print swastika
void swastika(int row, int col)
{
for (int i = 0; i < row; i++) {
	for (int j = 0; j < col; j++) {
		
	// checking if i < row/2
	if (i < row / 2) {
		
		// checking if j<col/2
		if (j < col / 2) {
			
		// print '*' if j=0
		if (j == 0)
			printf("*");
			
		// else print space
		else
			printf("  ");
		}
		
		// check if j=col/2
		else if (j == col / 2)
		printf(" *");
		else
		{
		// if i=0 then first row will have '*'
		if (i == 0)
			printf(" *");
		}
	}
	else if (i == row / 2)
		printf("* ");
	else {
		
		// middle column and last column will have '*'
		// after i > row/2
		if (j == col / 2 || j == col - 1)
		printf("* ");
		
		// last row
		else if (i == row - 1) {
			
		// last row will be have '*' if
		// j <= col/2 or if it is last column
		if (j <= col / 2 || j == col - 1)
			printf("* ");
		else
			printf("  ");
		}
		else
		printf("  ");
	}
	}
	printf("\n");
}
}

// driver code
int main()
{
// odd number of row and column
// to get perfect swastika
int row = 7, col = 7;
	
// function calling
swastika(row, col);
	
return 0;
}
