#pragma once
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

class monomial {
    private:
        float factor; // factor
        int exponential_x;  // variable
        int exponential_y; // variable
        
        
    public:
        monomial (){
            factor =0;
            exponential_x =0;
            exponential_y =0;
        }

        monomial (float factor, int exponential_x = 0.0f, int exponential_y = 0.0f) {
            this->factor = factor;
            this->exponential_x = exponential_x;
            this->exponential_y = exponential_y;
        }
        ~monomial () {
            factor = 0;
            exponential_x = 0;
            exponential_y = 0;
        }
        void createMonomial (float factor, int exponential_x = 0.0f, int exponential_y = 0.0f){
            this->factor = factor;
            this->exponential_x = exponential_x;
            this->exponential_y = exponential_y;
        }
        int getFactor() {
            return this->factor;
        }
        int getEx_x () {
            return this->exponential_x;
        }
        int getEx_y () {
            return this->exponential_y;
        }
        void setFactor(float factor) {
            this->factor = factor;
        }
        void setEx_x(int x) {
            this->exponential_x = x;
        }
        void setEx_y (int y) {
            this->exponential_y = y;
        }
        monomial operator+ (const monomial& other ) {
            monomial result;
            result.factor = this->factor + other.factor;
            result.exponential_x = this->exponential_x ;
            result.exponential_y = this->exponential_y ;
            return result;
        }
        
        monomial operator* (const monomial& other){
            monomial result;
            result.factor = this->factor * other.factor;
            result.exponential_x = this->exponential_x+other.exponential_x;
            result.exponential_y = this->exponential_y+other.exponential_y;
            return result;
        }
        monomial operator/ (const monomial& other){
            monomial result;
            result.factor = this->factor / other.factor;
            result.exponential_x = this->exponential_x-other.exponential_x;
            result.exponential_y = this->exponential_y-other.exponential_y;
            return result;
        }
        void derivate (int level) {
            while (level > 0) {
                level--;

                factor= factor * exponential_x * exponential_y;
                if (exponential_x > 0)
                    exponential_x--;
                if (exponential_y > 0)
                    exponential_y--;
            }
        }
        friend ostream& operator<< (ostream& out, const monomial& object){
            if (object.exponential_x >0 && object.exponential_y >0){
                out<<object.factor<<".x^"<<object.exponential_x<<".y^"<<object.exponential_y;
                return out;
            }
            if (object.exponential_x == 0 && object.exponential_y > 0){
                out<<object.factor<<".y^"<<object.exponential_y;
                return out;         
            }
            if (object.exponential_y == 0 && object.exponential_x > 0){
                out<<object.factor<<".x^"<<object.exponential_x;
                return out; 
            } else {out<<object.factor;
                    return out;
                    }
        
        }
        const monomial& operator= (const monomial& other);
};

const monomial& monomial::operator= (const monomial& other){
    this->factor = other.factor;
    this->exponential_x = other.exponential_x;
    this->exponential_y = other.exponential_y;
    return *this;
}


// 16.x^7.y^48064.x^5.y^2