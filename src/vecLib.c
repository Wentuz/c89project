#include <math.h>

struct Vector3 {
    float x;
    float y;
    float z;
};

struct Vector3 vector_add(
    struct Vector3 a,
    struct Vector3 b
)
{
    struct Vector3 result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;

    return result;
}

struct Vector3 vector_substract(
    struct Vector3 a,
    struct Vector3 b  
)
{
    struct Vector3 result;
    {
        result.x = a.x - b.x;
        result.y = a.y - b.y;
        result.z = a.z - b.z;

        return result;
    };
    
};

float vector_length(struct Vector3 v)
{
    return (float)sqrt(
        v.x * v.x +
        v.y * v.y +
        v.z * v.x
    );
}

struct Vector3 vector_normalize(struct Vector3 v)
{
    struct Vector3 result;
    float length;

    length = vector_length(v);

    if(length > 0.0f)
    {
        result.x = v.x / length;
        result.y = v.y / length;
        result.z = v.z / length;
    }else
    {
        result.x = 0.0f;
        result.y = 0.0f;
        result.z = 0.0f;
    }
    return result;
};

