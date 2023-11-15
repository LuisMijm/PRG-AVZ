#include <stdlib.h>
#include <entity.h>

#ifndef _PATH_H_
#define _PATH_H_

class Color
{
private:
    float red_;
    float green_;
    float blue_;
    float alpha_;
public:
    Color();
    Color(float r, float g, float b, float a);
    ~Color();
};



class Path : public Entity
{
private:
    Color borderColor_;
    Color fillColor_;
    bool solid_;
    float* vertex_;

public:
    Path();
    ~Path();
    void Draw() const;
    void AddVertex(const float* new_vertex, const int amount);

    // void SetBorderColor(const float r, const float g, const float b, const float a);
    // void SetFillColor(const float r, const float g, const float b, const float a);
    // bool SetSolid(const bool solid);
    // void SetVertex(const float* vertex, const int amount);
};

#endif