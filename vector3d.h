#ifndef VECTOR3D_H
#define VECTOR3D_H

typedef struct {
    float x, y, z;
} Vector3D;

/* Vector operations */
Vector3D vec_add(Vector3D a, Vector3D b);
Vector3D vec_sub(Vector3D a, Vector3D b);
float    vec_dot(Vector3D a, Vector3D b);
Vector3D vec_cross(Vector3D a, Vector3D b);

#endif /* VECTOR3D_H */