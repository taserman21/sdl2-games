#include "test.hpp"

#include "src/INCLUDE.hpp"

int main(int argc, char *args[])
{   
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window* window = SDL_CreateWindow("TEST", 0, 0, 1366, 768, SDL_WINDOW_RESIZABLE);
    
    sTexture text;
    
    sEvent tEvent;
    
    text.setSpec(0, 0, 500, 500);
    
    text.prep(window);
    
    text.drawImage("stingray.png");
    
    tEvent.kB.setFunc(sayHi);
    
    tEvent.eventRun();
    
    return 1;
}
