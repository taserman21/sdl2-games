// TEXTURE_CPP \\

#include <SDL2/SDL.h>

#include <SDL2/SDL_image.h>

#include <string>

// Class Texture for rendering Textures \\

using namespace std;

class sTexture
{
    public:
    
    sTexture(int, int, int, int, string);
    
    ~sTexture();
    
    int renderTexture(SDL_Window*);
    
    int loadFile();
    
    private:
    
    SDL_Renderer* sTexture_Renderer = NULL;
    
    SDL_Surface*  sTexture_Surface  = NULL;
    
    SDL_Texture*  sTexture_Texture  = NULL;
    
    SDL_Rect*     sTexture_SRect    = NULL;
    
    SDL_Rect*     sTexture_DRect    = NULL;
    
                                // Texture Width    \\
    
    int           sTextureWidth     = 0;
    
                                // Texture Height    \\
    
    int           sTextureHeight    = 0;
    
                                // Texture X Position \\
    
                  int sTextureXPos  = 0;
    
                                // Texture Y Position \\
    
                  int sTextureYPos  = 0;
    
                                // Texture Image File \\
    
    string        sTextureFile      = 0;
};

sTexture::sTexture(int W, int H, int X, int Y, string F)
{
    sTextureWidth  = W;
    
    sTextureHeight = H;
    
    sTextureXPos   = X;
    
    sTextureYPos   = Y;
    
    sTextureFile   = F;
    
    sTexture_SRect->w = W;
    
    sTexture_SRect->h = H;
    
    sTexture_SRect->x = X;
    
    sTexture_SRect->y = Y;
    
    sTexture_DRect->w = W;
    
    sTexture_DRect->h = H;
    
    sTexture_DRect->x = X;
    
    sTexture_DRect->y = Y;
}

int sTexture::loadFile()
{
    sTexture_Surface = IMG_Load(sTextureFile.c_str());
}

int sTexture::renderTexture(SDL_Window* window)
{
    sTexture_Renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    
    loadFile();
    
    sTexture_Texture  = SDL_CreateTextureFromSurface(sTexture_Renderer, sTexture_Surface);
    
    SDL_RenderCopy(sTexture_Renderer, sTexture_Texture, sTexture_SRect, sTexture_DRect);
    
    SDL_RenderPresent(sTexture_Renderer);
}

sTexture::~sTexture()
{
}

