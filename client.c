#include <stdio.h>
#include "vector3d.c"

int main(){
    vector v1 = {1.0, 2.0, 3.0};
    vector v2 = {4.0, 5.0, 6.0};

    vector sum = add(v1,v2);
    vector diff = subtract(v1,v2);
    float dprod = dot(v1,v2);
    vector cprod = cross(v1,v2);

    printf("Sum: (%.2f, %.2f, %.2f)\n", sum.x, sum.y, sum.z);
    printf("Difference: (%.2f, %.2f, %.2f)\n", diff.x, diff.y, diff.z);
    printf("Dot Product: %.2f\n", dprod);
    printf("Cross Product: (%.2f, %.2f, %.2f)\n", cprod.x, cprod.y, cprod.z);

    return 0;
}