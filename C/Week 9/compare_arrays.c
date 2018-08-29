#include <stdio.h>
int main()
{
	int a[10], b[10], n, flag = 1;

	printf("Enter the limit: \n");
	scanf("%d", &n);

	printf("Enter the array 1 elements: \n");

	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	printf("Enter the array 2 elements: \n");

	for(i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}

	for(i = 0; i < n; i++){
		if(a[i] != b[i]){
			flag = 0;
		}
	}

	if(flag){
		printf("Equal\n");
	}
	else{
		printf("Not equal\n");
	}

}