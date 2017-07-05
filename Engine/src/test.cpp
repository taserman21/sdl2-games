#include "TEXTURE.hpp"

std::string srfile = "stingray.png";

sTexture Texture(500, 500, 44, 44, srfile);

int main(int argc, char* args[])
{
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window* srwindow;
    
    Texture.renderTexture(srwindow);
    
    SDL_Delay(4000);
    
    return 1;
}
