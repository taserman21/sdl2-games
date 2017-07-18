// EVENT_HPP \\

#ifndef EVENT_HPP

#define EVENT_HPP

#include "SDL.hpp"
#include "KEY.cpp"

#endif

const int EVENT_QUIT =  0;
const int EVENT_KEY  =  1;
const int EVENT_CLICK = 2;

class sEvent
{   
    private:
    
    int quitEvent();
    
    public:
    
    sEvent();
    
    ~sEvent();
    
    int anQuit();
    
    int eventRun();
};  