#ifndef SIR_OINKS_HPP_INCLUDED
#define SIR_OINKS_HPP_INCLUDED

#include "Pozicija.hpp"

class Sir_Oinks
{
private:

    double v;
    bool gr;
    bool hat;
    bool clinging;
    Pozicija Sirp;
    double vMax;

public:

    Sir_Oinks(double v1,bool gr1,bool hat1,bool clinging1,int xx,int yy,double vMax1):Sirp(xx,yy)
    {
        v=v1;
        gr=gr1;
        hat=hat1;
        clinging=clinging1;
        vMax=vMax1;
    }

    Jump()
    {
        if(gr=true)
        {
            SirO.Pozicija(x,y+3);
        }
    }
    Sprint()
    {
        if(v<vMax)
        {
            v=vMax;
        }
    }

};

#endif // SIR_OINKS_HPP_INCLUDED
