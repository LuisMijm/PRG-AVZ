
#include <path.h>

Path::Path(/* args */)
{
}

Path::~Path()
{
}

Color ::Color()
{
    red_ = 0;
    green_ = 0;
    blue_ = 0;
    alpha_ = 0;
}

Color ::Color(const float r, const float g, const float b, const float a)
{
    red_ = r;
    green_ = g;
    blue_ = b;
    alpha_ = a;
}

Color ::~Color(){}

