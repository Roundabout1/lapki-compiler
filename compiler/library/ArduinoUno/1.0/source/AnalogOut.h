#ifndef ANALOGOUT_H
#define ANALOGOUT_H

class AnalogOut {
    public:
        int value;
        int _pin;
        AnalogOut(uint8_t pin);
        void write(int _value);
};

#endif