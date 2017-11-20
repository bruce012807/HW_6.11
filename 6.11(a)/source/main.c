#include<stdio.h>
#include<stdlib.h>
#define size 10

int main(void)
{
	int a[size] = { 2,6,4,8,10,12,89,68,45,37 };
	int pass;
	size_t i;
	int hold;
	int x;
	int num = 1;
	printf("Data items in original order\n");

	for (i = 0; i < size; i++) {
		printf("%4d",a[i]);
	}

	printf("\n");

	for (pass = 1; pass < size; pass++){
		for(i=0;i<size-num;++i){
			if (a[i] > a[i + 1]){
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold; 
				}
			for (x = 0; x < size; x++)printf("%4d", a[x]);
			printf("\n");
		}
		num = num + 1;
		printf("\n");
	}

	printf("\nData items in ascending order\n");

	for (i = 0; i < size; i++) {
		printf("%4d",a[i]);
	}
	printf("\n");


	system("pause");
	return 0;
}
