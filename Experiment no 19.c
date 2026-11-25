#include <stdio.h>
int main() {
 char str[100];
 int length = 0, i;
 printf("Enter a string: ");
 scanf("%s", str);
 // Find length without strlen()
 while (str[length] != '\0') {
 length++;
 }
 printf("Length of the string = %d\n", length);
 // Reverse the string without strrev()
 printf("Reversed string = ");
 for (i = length - 1; i >= 0; i--) {
 printf("%c", str[i]);
 } 
 printf("\n");
 return 0;
}
