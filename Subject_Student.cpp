#include<iostream>
using namespace std;

class Subject {
    private:
        string nameSub;
        double pointSub;
        int numberCredit;
        double money;
    public:
        void create_Subject(){
            string a;
            double b;
            int c;
            double d;
            cout<<"enter subject'name: "; cin>>a;
            cout<<"enter point: ";cin>>b;
            cout<<"enter numberCredit: ";cin>>c;
            cout<<"enter subjec'money: ";cin>>d; 
            this->nameSub = a;
            this->pointSub = b;
            this->numberCredit = c;
            this->money = d;
        } 
        string getnameSub() {
            return this->nameSub;
        }
        double getpointSub() {
            return this->pointSub;
        }
        int getnumberCreditSub() {
            return this->numberCredit;
        }
        double getmoneySub() {
            return this->money;
        }
        void display() {
            cout<<"subject: "<<this->nameSub<<endl;
            cout<<"point: "<<this->pointSub<<endl;
            cout<<"numberCredit: "<<this->numberCredit<<endl;
            cout<<"money: "<<this->money;
        }
};
class Student  {
    private:
        string id,name;
        Subject sub[30];
        int numSub;
    public:
        Student () {
            cout<<"enter id: ";cin>>this->id;
            cout<<"name: ";cin>>this->name;
            cout<<"enter number of subjects: ";cin>>this->numSub;
            for (int i=0; i<this->numSub; i++)   
               this->sub[i].create_Subject();
        }
        string getID() {return this->id;}
        string getName() {return this->name;}
        int getNumSubs() {return this->numSub;}
        long getSumMoney() {
            long sum=0;
            for (int i=0; i<this->numSub; i++)
                sum +=  sub[i].getmoneySub();
            return sum;
        }
        double avgPoint() {
            double point=0;
            int sum=0;
            for (int i=0; i<this->numSub; i++){
                point +=  sub[i].getpointSub() * sub[i].getnumberCreditSub();
                sum += sub[i].getnumberCreditSub();
            }
            return point / sum;
        }
        void display() {
            cout<<"---------------------------------------------------------------------"<<endl;
            cout << "Id: " << id << endl;
            cout << "Name Student: " << name << endl;
            cout << "List Subject" << endl;
            for (int i = 0; i < this->numSub; i++)
            {
                sub[i].display();
                cout<<endl;
            }
            cout << "Sum Money Have To Pay: " << getSumMoney() << endl;
            cout << "Average Point: " << avgPoint() << endl;
        }
};
int main () {
    Student s;
    s.display();
    cout<<"average point: "<<s.avgPoint() << endl;
    return 0;
}