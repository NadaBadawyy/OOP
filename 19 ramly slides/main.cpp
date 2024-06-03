#include <iostream>
using namespace std;
class shape{
protected:
    int *wid, *hi;
public:
    shape(int a=0, int b=0){
        wid=new int ;
        hi=new int;
        *wid=a;
        *hi=b;
    }
    virtual int area(){
cout<<"dd";
    };
    virtual ~shape(){
        cout<<"base"<<endl;
    }

};
class reg:public shape{
public:
    reg(int c=0, int d=0) {
        wid=new int ;
        hi=new int;
        *wid=c;
        *hi=d;
    }
    int area(){
    return *wid* *hi;
}
~reg(){
        cout<<"reg"<<endl;
    }
};
class cir:public shape{
public:
    cir(int c, int d=0) {
        wid=new int ;
        hi=new int;
        *wid=c;
        *hi=d;
    }
    int area(){
        return *wid* *wid*3.14;
    }
    ~cir(){
        cout<<"cir"<<endl;
    }
};
int main() {
shape *s;
s=new cir(1,2);
cout<<s->area()<<endl;
delete s;


}
