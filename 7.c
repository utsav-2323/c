#include <stdio.h>

#define PI 3.14159

int main() {
    float radius;
    float area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("The area of the circle with radius %.2f is: %.2f\n",area);

    return 0;
}
