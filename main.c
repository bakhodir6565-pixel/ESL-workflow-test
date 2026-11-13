#include <stdio.h>
#include "vector3d.h"

int main(void) {
    Vector3D v1 = { 1.0f, 2.0f, 3.0f };
    Vector3D v2 = { 4.0f, 5.0f, 6.0f };

    Vector3D sum = vec_add(v1, v2);
    Vector3D sub = vec_sub(v1, v2);
    float dot = vec_dot(v1, v2);
    Vector3D cross = vec_cross(v1, v2);

    printf("v1 = (%.1f, %.1f, %.1f)\n", v1.x, v1.y, v1.z);
    printf("v2 = (%.1f, %.1f, %.1f)\n", v2.x, v2.y, v2.z);
    printf("------------------------------------\n");
    printf("Sum   : (%.1f, %.1f, %.1f)\n", sum.x, sum.y, sum.z);
    printf("Sub   : (%.1f, %.1f, %.1f)\n", sub.x, sub.y, sub.z);
    printf("Dot   : %.1f\n", dot);
    printf("Cross : (%.1f, %.1f, %.1f)\n", cross.x, cross.y, cross.z);

    return 0;
}