#ifndef Coordinates_h
#define Coordinates_h
#include<iostream>
#include<math.h>
using namespace std;

class Coordinates {
    private:
        float x,y;
    public:
        Coordinates (float x, float y ) {
            x=x;
            y=y;
        }
        friend std::ostream& operator<< (std::ostream& out, const Coordinates& other ) {
            out<<"coordinate: ("<<other.x<<", "<<other.y<<")";
            return out;
        }
        float getX () const { return x; }
        float getY () const { return y; }

        virtual float distance (const Coordinates& other) { 
            return sqrt (pow(x - other.x, 2) + pow(y - other.y, 2));
        }



};

#endif