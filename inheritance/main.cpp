#include <iostream>
using namespace std;
class shape{
protected:
    int *width,*height;
public:
    shape():width(0),height(0){
    }
    shape(int a,int b){
        width=new int ;
        height=new int;
        *width=a;
        *height=b;
    }
    virtual float getarea(){
        cout<<"ddd\n";
    };
};
class reg:public shape{
public:
    reg(int a,int c){
        width=new int ;
        height=new int;
        *width=a;
        *height=c;
    }
    float getarea(){
        return *width * *height;
    }
};
class cir:public shape{
public:
    cir(int a){
        width=new int ;

        *width=a;

    }
    float getarea(){
        return *width* *width*3.14;
    }
};
class sq:public shape{
public:
    sq(int a){
        width=new int ;

        *width=a;
    }
    float getarea(){
        return *width* *width;
    }
};
int main() {
shape* r;
r=new sq(3);
cout<<r->getarea();
}
