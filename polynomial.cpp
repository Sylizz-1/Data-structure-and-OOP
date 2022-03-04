#include "monomial.cpp"
#include<iostream>
#include<cassert>
using namespace std;

class polynomial : public monomial {
    private:
        int numMonomial;
        monomial poly[10];
    public:
        polynomial () {
            numMonomial =0;
           
        }

        polynomial (int numMonomial) : numMonomial(numMonomial){
            float factor;
            int exponential_x,exponential_y;
            for (int i=1; i<=numMonomial; i++){
                cout<<"enter monomial "<<i<<":";
                cin>>factor>>exponential_x>>exponential_y;
                this->poly[i].createMonomial(factor, exponential_x, exponential_y);

            }
        }   
        void compact () {
            for (int i=1; i<this->numMonomial; i++) {
                for (int j=i+1; j<=this->numMonomial; j++)
                if (poly[i].getEx_x() == poly[j].getEx_x() && poly[i].getEx_y() == poly[j].getEx_y()) {
                    poly[i]= poly[i] + poly[j];
                    for (int u=j; u<=this->numMonomial; u++)
                        poly[u]=poly[u+1]; 
                        this->numMonomial--;  
                }   
            }
        }
        polynomial operator+ (const polynomial& other ) {
            polynomial result;
            for (int i=1; i<= this->numMonomial; i++) 
                result.poly[i]=this->poly[i];
            for (int j=1; j<= other.numMonomial; j++)
                result.poly[this->numMonomial+j]=other.poly[j] ;
            result.numMonomial= this->numMonomial + other.numMonomial;
            result.compact();
            return result;
        }
        friend ostream& operator<< (ostream& out, polynomial& object) {
            for (int i = 1; i <= object.numMonomial; i++)
                out<<"+("<<object.poly[i].getFactor()<<".x^"<<object.poly[i].getEx_x()<<".y^"<<object.poly[i].getEx_y()<<") ";
            return out;
        }
};


int main () {
    
    polynomial var(2); 
    polynomial var1(3);
    polynomial var2;
    var2 = var1 + var;
    cout<<var2<<endl;
    
    return 0;
}






