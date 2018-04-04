#include "Arduino.h"
#include "Light.h"

Light::Light(int pinR, int pinG, int pinB,
             float brightR, float brightG, float brightB,
             int capR, int capG, int capB,
             float deltaR, float deltaG, float deltaB) {
  _pinR = pinR;
  _pinG = pinG;
  _pinB = pinB;
  _brightR = brightR;
  _brightG = brightG;
  _brightB = brightB;
  _capR = capR;
  _capG = capG;
  _capB = capB;
  _deltaR = deltaR;
  _deltaG = deltaG;
  _deltaB = deltaB;
}

Light::fade() {
  if (_brightR > _capR || _brightR <= 0) {
    _deltaR = -1 * _deltaR;
  }
  if (_brightG > _capG || _brightG <= 0) {
    _deltaG = -1 * _deltaG;
  }
  if (_brightB > _capB || _brightB <= 0) {
    _deltaB = -1 * _deltaB;
  }
  _brightR = _brightR + _deltaR;
  _brightG = _brightG + _deltaG;
  _brightB = _brightB + _deltaB;

  analogWrite(_pinR, _brightR);
  analogWrite(_pinG, _brightG);
  analogWrite(_pinB, _brightB);
}
