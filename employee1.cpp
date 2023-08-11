#include <iostream>
using namespace std;
class Account{
     public:
     float salary=6000;
};
class Programmer:public Account{
    public:
    float bonus=550;
};
int main(){
    Programmer p1;
    cout<<"salary:"<<p1.salary<<endl;
    cout<<"Bonus"<<p1.bonus<<endl;
    return 0;
}
