// TEXTURE_HPP \\

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <string>

class sTexture
{
    private:
    
// Variable that will hold value for the texture's x, y position, width, height. \\
 
    int texX;
    int texY;
    int texW;
    int texH;
    
    SDL_Renderer* stREND;
    SDL_Surface*  stSURF;
    SDL_Texture*  stTEXT;
    
    public:
    
// Sets image specifications based on corresponding values seen above. \\

    int setSpec(int, int, int, int);
    
// Function to prep texture with x, y, w, and h values. \\
    
    int prep(SDL_Window*);


// Bool to evaluate whether the texture has been prepped or not by the prep \\
// function.                                                                 \\                                                            

    bool isPrepped;

// Function to draw image to screen. \\
    
    int drawImage(std::string);
    
    int stCLOSE();
    
    sTexture();
    ~sTexture();
};
    
    