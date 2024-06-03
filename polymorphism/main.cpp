#include <iostream>
using namespace std;
class poly{
protected:
    int w,h;
public:
    void set_values(int a, int b){
        w=a;
        h=b;
    }
    virtual int area()=0;// abstract class
//    {
//        this just a virual func
//    }
    void printarea(){
    cout<<this->area()<<endl;
    }

};
class sqq:public poly{
     int area(){
        return w*h;
    }
};
class tri:public poly{
    int area(){
        return w*h/2;
    }
};

int main() {
//    poly p3; incorrect abstract class use only pointers not objects
    poly *p1,*p2;
    p1=new sqq;
    p2=new tri;// this is easier
//sqq r1; tri r2;
//p1=&r1; p2=&r2;
    p1->set_values(2,4);
    p2->set_values(2,4);
//    cout<<p1->area()<<endl; //8
//    cout<<p2->area()<<endl; //4
p1->printarea();
p2->printarea();



}
