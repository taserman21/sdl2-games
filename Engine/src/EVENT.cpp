// EVENT_CPP \\

#ifndef EVENT_CPP

#define EVENT_CPP

#include "EVENT.hpp"

// Configures the event on what type it is \\
    
// Runs the event and polls for interaction from user \\

sEvent::sEvent()
{
}

sEvent::~sEvent()
{
}

int sEvent::eventRun()
{   
    int isQuit = 0;
    
    while(isQuit != 1)
    {
        SDL_PollEvent(&e);
        
        if(e.type == SDL_QUIT)
        {   
            isQuit = 1;
        }
        
        if(e.type == SDL_KEYDOWN)
        {
            keyEval();
        }
    }
    
    return 1;
}

#endif
            