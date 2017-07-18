#include "src/INCLUDE.hpp"
#include <iostream>

void kA()
{
    std::cout << "You Pressed A!" << std::endl;
}

int main(int argc, char *args[])
{   
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window* window = SDL_CreateWindow("TEST", 0, 0, 1366, 768, SDL_WINDOW_RESIZABLE);
    
    sTexture text;
    
    sEvent tEvent;
    
    text.setSpec(0, 0, 500, 500);
    
    text.prep(window);
    
    text.drawImage("stingray.png");
    
    tEvent.eventRun();
    
    return 1;
}
