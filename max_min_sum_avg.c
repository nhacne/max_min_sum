#include<stdio.h>

void main () {
	int arr[5];
	int i, max, min, sum, avg;
	for (i = 0; i < 5; i++) {
		printf("Nhap gia tri thu %d :", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0, max = arr[0], min = arr[0]; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}else if (min > arr[i]){
			min = arr[i];
		}
		sum += arr[i];
		avg = sum / 5;
	}
	printf("\n Max : %d",max);
	printf("\n Min : %d",min);
	printf("\n Sum : %d",sum);
	printf("\n Avg : %d \n",avg);
	printf("\n !Arr : ");
	for (i = 4; i >= 0;) {
		printf("%d, ",arr[i]);
		i--;
	}
}
