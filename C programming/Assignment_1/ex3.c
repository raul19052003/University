#include <stdio.h>
#define SIZE 5

int main(){
	int i, a[SIZE], maxim, minim;
	printf("Enter numbers: ");
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	maxim=a[0];
	minim=a[0];
	for(i=0; i<SIZE; i++)
	{
		if(a[i]>maxim)
			maxim=a[i];
		if(a[i]<minim)
			minim=a[i];
	}
	printf("The largest number is: %d\n", maxim);
	printf("The smallest number is: %d\n", minim);
	return 0;
}
