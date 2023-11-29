
#include <path.h>

Path::Path()
{
}

Path::Path(Color border, Color fill, bool solid, float *vertex)
{
    borderColor_ = border;
    fillColor_ = fill;
    solid_ = solid;
    vertex = vertex;
}

Path::~Path()
{
    free(vertex_);
}

void Path::Draw()
{

}

void Path::AddVertex()
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




