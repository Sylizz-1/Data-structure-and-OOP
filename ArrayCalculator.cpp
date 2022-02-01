#include<iostream>
using namespace std;
class Array {
    private:
        int *arr;
        int n;
    public:
        Array() {
           cout<<"Import quantily of Array: ";cin>>n;
           int *arr = new int[n];
           for (int i=0; i<n; i++)
                cin>>this->arr[i];
        }
        ~Array() {
            delete[] arr;
            cout<<"delete Array called!";
        }
        int sumOFArraY() {
            int sum = 0;
            for (int i=0; i<n; i++) sum += this->arr[i];
            return sum;
        }
};
int main() {
    Array ar;
    cout<<"Total of array: "<<ar.sumOFArraY()<<endl;
    return 0;
}
// complete