
#include <stdlib.h>
#include <string>

class Texture
{
private:
    std::string path_;
    // ESAT::SpriteHandle texture_;

public:
    Texture(std::string path);
    // Texture(/*buffer*/, Vec2 size);
    ~Texture();

    // Vec2 Size();
    // ESAT::SpriteHandle SubTexture(Vec2 start, Vec2 size);
};


