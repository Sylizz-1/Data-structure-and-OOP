#include "Coordinates.cpp"
#include<iostream>
#include<math.h>

using namespace std;

class space : public Coordinates {
    private:
        float z;
    public:
        space (float x, float y, float z) :Coordinates (x,y) {
            z = z;
        }
        virtual float display(const space& other) {
            return sqrt (pow(getX()- other.getX(),2) + pow(getY() - other.getY(), 2) + pow(z - other.z,2));
        }

};