#include <stdio.h>
#include <math.h>

// Function to calculate area
float AreaOfTriangle(float a, float b, float c);

int main() {
    float side1, side2, side3, area;

    // Read sides
    printf("Enter 3 sides of triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Call function to get area
    area = AreaOfTriangle(side1, side2, side3);

    // Print result
    printf("Area = %.2f\n", area);

    return 0;
}
float AreaOfTriangle(float a, float b, float c) {
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
