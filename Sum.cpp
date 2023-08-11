#include<iostream>
using namespace std;

class sum {
    private:
        int a,b,c;
    public:
        void calc() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        c = a+b;
        cout << "Sum is: " << c;
        }
};

int main () {
    sum s;
    s.calc();
    return 0;
}
