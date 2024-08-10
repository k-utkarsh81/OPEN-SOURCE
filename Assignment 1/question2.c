#include <stdio.h>

void main () {
 char arr[100];


printf("Enter the array!!");
gets(arr);

int i = 0; 
int len = 0;
while(arr[i] != '\0') {
    i += arr[i];
    len++;
}

int avg = i / len; 
printf("The average of the array: ");
puts(arr);
printf("  is: %d", avg);

}