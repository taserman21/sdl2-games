// TEXTURE_CPP \\

#include "TEXTURE.hpp"

using namespace std;

sTexture::sTexture()
{
}

sTexture::~sTexture()
{
}

int sTexture::setSpec(int x, int y, int w, int h)
{
    this->texX = x;
    this->texY = y;
    this->texW = w;
    this->texH = h;
}

// Function to prepare the Texture for drawing \\

int sTexture::prep(SDL_Window* w)
{
    stREND = SDL_CreateRenderer(w, -1, 0);
}

// Function to actually draw the image to the screen. \\

int sTexture::drawImage(std::string f)
{
    // String that holds the name of the file that the texture will draw. \\
    
    std::string file = f;
    
    // Creates surface that the specified file is loaded onto. \\
    
    stSURF = IMG_Load(file.c_str());
    
    // Creates a texture that is a copy of created surface. \\
    
    stTEXT = SDL_CreateTextureFromSurface(this->stREND, this->stSURF);
    
    // Rectangle that the texture will be rendered to. \\
    
    SDL_Rect     stTARG = {texX, texY, texW, texH};
    
    SDL_RenderCopy(this->stREND, this->stTEXT, NULL, &stTARG);
    
    SDL_RenderPresent(this->stREND);
}

int sTexture::stCLOSE()
{
    SDL_FreeSurface(this->stSURF);
    
    SDL_DestroyRenderer(this->stREND);
}
    