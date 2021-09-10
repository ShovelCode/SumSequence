#include <stdio.h>

int main(void){
	int choice = 1;
	int sum = 0;
	int num;
	while(choice){
		printf("Enter next number: ");
		scanf("%d", &num);
		sum += num;
		printf("continuation number: ");
		scanf("%d", &choice);
	}
	/*
	//printf("testing output");
	int argc = 0;
	printf("Enter the amount of numbers that will be added: ");
	scanf("%d", &argc);

	int arr[argc];
	//printf("%d", argc);

	for(int i = 0; i < argc; i++){
		printf("Enter for array index %d", i);
		scanf("%d", arr[i]);
		
	}

	int sum;
	for(int j = 0; j < argc; j++){
		sum += arr[j];
	} */
}
