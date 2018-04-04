//
// Georges pin fader
//

#ifndef Light_h
#define Light_h

#include "Arduino.h"

class Light {
  public:

    Light(int pinR, int pinG, int pinB,
        float brightR, float brightG, float brightB,
        int capR, int capG, int capB,
        float deltaR, float deltaG, float deltaB);
    void fade();
  private:

    int pinR;
    int pinG;
    int pinB;
    int brightR;
    int brightG;
    int brightB;
    int capR;
    int capG;
    int capB;
    int deltaR;
    int deltaG;
    int deltaB;
}

#endif
