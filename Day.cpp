#include<iostream>
using namespace std;

class Day {
    private:
        int d,m,y;
    public:
        Day (int d,int m,int y ){
            d=d;
            m=m;
            y=y;
        }

        static bool leapYear (int y) { 
            return y == 366;
        }
        static int date_of_month(int m,int y);
        static void find_Day (int d, int y);  // Enter the date and year to find out what day of the year it is

        bool leapYear () const { 
            return this->y == 366;
        }
        int date_of_month() {
            int days;
            switch (m){
                case 4:
                case 6:
                case 9:
                case 11: return 30;
                case 2: if (this->leapYear()) {
                        return 29;
                        }else return 28;    
                default: return 31;
            }
        }
        int tinhngay() {
            int count=0;
            for (int i=1;i<this->m;i++){
                count=count+ this-> date_of_month();
            }
                count=count + this->d;
            return count;
        }
    
};

int main () {

}

int Day::date_of_month(int m,int y)
{
	int days;
	switch (m){
		case 4:
		case 6:
		case 9:
		case 11: days=30;break;
		case 2: if ( Day::leapYear(y) ) {
				 days=29;
				 }else
				 days=28;
				break;
		default: days=31;break;
	}
	return days;
}
void Day::find_Day (int d, int y) {
    int num=1;
    for (int i=1; i<=12; i++) {
        if (d - Day::date_of_month(i,y)>0){
            d-= Day::date_of_month(i,y);
            num++;
        } else break;
    }
    cout<<"the that day is: "<<d<<"/ "<<num<<"/ "<<y<<endl;
}


