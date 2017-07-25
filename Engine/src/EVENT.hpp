// EVENT_HPP \\

#ifndef EVENT_HPP

#define EVENT_HPP

#include "SDL.hpp"
#include "TYPES.hpp"

#endif

const int EVENT_QUIT =  0;
const int EVENT_KEY  =  1;
const int EVENT_CLICK = 2;

class sEvent
{   
    private:
    
    int quitEvent();
    
    int keyEval();
    
    SDL_Event e;
    
    // Structure that holds a bool and pointer function. \\
    
    struct kKey
    {
        bool  init;
        
        int_p func;
        
        void setFunc(int function())
        {   
            int (*getfunc)() = function;
            
            int_p func = getfunc;
        }
    };
    
    public:
    
    kKey kA, kB, kC, kD, kE, kF, kG, kH, kI, kJ, kK, kL, kM, kO, kP, kQ,
    kR, kS, kT, kU, kV, kW, kX, kY, kZ;
    
    int anQuit();
    
    int eventRun();
    
    int keyInit();
    
    sEvent();
    
    ~sEvent();
};  