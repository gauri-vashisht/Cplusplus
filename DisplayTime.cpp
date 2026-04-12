#include <iostream>
using namespace std;

class Time{
    private:
    int hour;
    int minute;
    int second;
    public:
    void setTime(int h,int m, int s){
        hour=h; minute=m; second=s;
    }

    void print(){
        cout<<"Time = "<<endl;
        cout<<hour<<":"<<minute<<":"<<second<<":"<<endl;
    }
};
int main(){
    Time t1,t2;
    t1.setTime(3,02,04);
    t2.setTime(4,56,17);
    t1.print();
    t2.print();
    return 0;
}