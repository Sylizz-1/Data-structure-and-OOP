#include <iostream>
#include<string.h>
using namespace std;

class Student {
    private:

        string name;
        float math,physic,chemistry;
    public: 

       #include <iostream>
#include <vector>
using namespace std;

class Student {
private:
	string name;
	double math;
	double physic;
	double chemistry;
public:
	Student() {}
	Student(string name, double math, double physic, double chemistry)
	{
		this->name = name;
		this->math = math;
		this->physic = physic;
		this->chemistry = chemistry;
	}
	double getMath()
	{
		return math;
	}
	double getPhysic()
	{
		return physic;
	}
	double getChemistry()
	{
		return chemistry;
	}
	void display()
	{
		cout << "Name: " << this->name << endl;
		cout << "Point math: " << this->math << endl;
		cout << "Point physic: " << this->physic << endl;
		cout << "Point chemistry: " << this->chemistry << endl;
		cout << "Average: " << avgPoint() << endl;
	}
	double avgPoint()
	{
		return (math + physic + chemistry) / 3;
	} 
    
};

int main() {
    Student s;      
    s.display();
    return 0;
}