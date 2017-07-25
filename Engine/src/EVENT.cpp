// EVENT_CPP \\

#ifndef EVENT_CPP

#define EVENT_CPP

#include "EVENT.hpp"

// Configures the event on what type it is \\
    
// Runs the event and polls for interaction from user \\

/* Function that evaluates which key is pressed and runs the corresponding
function. */

sEvent::sEvent()
{
}

sEvent::~sEvent()
{
}

int sEvent::keyEval()
{
    switch (e.key.keysym.sym)
    {
        case SDLK_a:
        if(kA.init == true)
        {
            kA.func();
        }
        break;
        
        case SDLK_b:
        if(kB.init == true)
        {
            kB.func();
        }
        break;
        
        case SDLK_c:
        if(kC.init == true)
        {
            kC.func();
        }
        break;
    }
}

int sEvent::eventRun()
{   
    int isQuit = 0;
    
    SDL_PollEvent(&e);
        
    if(e.type == SDL_QUIT)
    {   
        isQuit = 1;
    }
        
    if(e.type == SDL_KEYDOWN)
    {
        keyEval();
    }
    
    return 1;
} 

#endif
            