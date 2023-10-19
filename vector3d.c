#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x, y, z;
} vector;


vector add(vector v1, vector v2){
    vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;
    return result;
}

vector subtract(vector v1, vector v2){
    vector result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    result.z = v1.z - v2.z;
    return result;
}

float dot(vector v1, vector v2){
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

vector cross(vector v1, vector v2){
    vector result;
    result.x = v1.y * v2.z - v1.z * v2.y;
    result.y = v1.z * v2.x - v1.x * v2.z;
    result.z = v1.x * v2.y - v1.y * v2.x;
    return result;
}

// ISSUE: later we create an issue and hotfix it in github