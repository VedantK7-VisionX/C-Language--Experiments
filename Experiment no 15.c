#include <stdio.h>
float base, height; // global variables used by no-argument functions
// (a) No arguments, no return value
void areaNoArgNoReturn() 
{
 printf("\n[No Arguments, No Return Value]\n");
 printf("Enter base and height: ");
 scanf("%f %f", &base, &height);
 float area = 0.5 * base * height;
 printf("Area of triangle = %.2f\n", area);
}
// (b) Arguments, no return value
void areaArgNoReturn(float b, float h) {
 printf("\n[Arguments, No Return Value]\n");
 float area = 0.5 * b * h;
 printf("Area of triangle = %.2f\n", area);
}
// (c) No arguments, returns a value
float areaNoArgReturn() {
 return 0.5 * base * height; // uses global base and height
}
// (d) Arguments, returns a value
float areaArgReturn(float b, float h) {
 return 0.5 * b * h;
}
int main() {
 float b, h, area;
 // (a) No arguments, no return value
 areaNoArgNoReturn();
 // (b) Arguments, no return value
 printf("\nEnter base and height: ");
 scanf("%f %f", &b, &h);
 areaArgNoReturn(b, h);
 // (c) No arguments, returns a value (uses global base and height set earlier)
 area = areaNoArgReturn();
 printf("\n[No Arguments, Returns a Value]\n");
 printf("Area of triangle (using stored base and height) = %.2f\n", area);
 // (d) Arguments, returns a value
 area = areaArgReturn(b, h);
 printf("\n[Arguments, Returns a Value]\n");
 printf("Area of triangle = %.2f\n", area);
 return 0;
}
