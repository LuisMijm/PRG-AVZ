#include <texture.h>
// #include <esat/sprite.h>
Texture::Texture(std::string path)
{
    path_ = path;
    //texture_ = ESAT::SpriteFromFile(path);
}

Texture::~Texture()
{
  // esat::SpriteRelease(texture_);
}

// Vec2 Size()
// {
//   Vec2 aux;

//   aux.x = ESAT::SpriteHeigh(texture_);
//   aux.y = ESAT::SpriteWidth(texture_);

//   return aux;
// }

// ESAT::SpriteHandle SubTexture(Vec2 start, Vec2 size)
// {
//    ESAT::SpriteHandle aux;
//    ESAT::SubSprite(texture, start.x, start.y, size.x, size.y);
//    return aux;
// }