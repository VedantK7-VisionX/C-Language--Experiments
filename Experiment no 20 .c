#include <stdio.h>
#include <string.h>
int main() {
 char str1[100], str2[100], copyStr[100];
 int result, i, len;
 char temp;
 printf("Enter first string: ");
 scanf("%s", str1);
 printf("Enter second string: ");
 scanf("%s", str2); 
 // 1. Copy one string into another
 strcpy(copyStr, str1);
 printf("\nCopied string : %s\n", copyStr);
 // 2. Reverse the string (portable in-place reversal)
 len = strlen(str1);
 char reversed[100];
 strcpy(reversed, str1);
 for (i = 0; i < len / 2; i++) {
 temp = reversed[i];
 reversed[i] = reversed[len - 1 - i];
 reversed[len - 1 - i] = temp;
 }
 printf("Reversed string : %s\n", reversed);
 // 3. Length of the string
 printf("Length of str1 : %d\n", len);
 // 4. Compare two strings
 result = strcmp(str1, str2);
 if (result == 0) {
 printf("Comparison result : str1 and str2 are equal\n");
 } else if (result < 0) {
 printf("Comparison result : str1 is less than str2\n");
 } else {
 printf("Comparison result : str1 is greater than str2\n");
 }
 // 5. Concatenate str2 to str1
 strcat(str1, str2);
 printf("Concatenated string : %s\n", str1);
 return 0;
}
