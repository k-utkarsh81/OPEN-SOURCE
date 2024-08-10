#include <stdio.h>

int main()
{
   char arr1[10], arr2[10];
   int begin, end, count = 0;

   printf("Input a string\n");
   gets(arr1);

   while (arr1[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      arr2[begin] = arr1[end];
      end--;
   }

   arr2[begin] = '\0';

  printf("Here is the revrse of the string: ");
   printf("%s\n", arr2);

   return 0;
}