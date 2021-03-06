#pragma once

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct Rect
{
    enum
    {
        X,
        Y,
        W,
        H,
        Compontent_Count,
    };

    union
    {
        struct
        {
            int x;
            int y;
            int width;
            int height;
        };

        int data[Compontent_Count];
    };
} Rect;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct FloatRect
{
    enum
    {
        X,
        Y,
        W,
        H,
        Compontent_Count,
    };
    union
    {
        struct
        {
            float x;
            float y;
            float width;
            float height;
        };

        float data[Compontent_Count];
    };

} FloatRect;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct Vec2
{
    float x, y;
} Vec2;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define int_min(a, b) ((a > b) ? b : a)
#define int_max(a, b) ((a < b) ? b : a)

