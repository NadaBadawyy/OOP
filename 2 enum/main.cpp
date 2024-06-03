//#include <iostream>
//using namespace std;
//string h[5]={"sat","sun","mon","tues","wed"};
//enum days {sat=1,sun,mon,tues,wed};
//class week{
//   days d[5] ;
//public:
//    void setday(days w[]){
//        for (int i = 0; i < 5; ++i) {
//            d[i]=w[i];
//        }
//
//    }
//    void print(){
//        for (int i = 0; i <5 ; ++i) {
//            cout<<"the nom of day "<<h[i]<<"= "<<d[i]<<endl;
//        }
//
//    }
//};
//int main() {
//days d[5]={sat,sun,mon,tues,wed};
//week f;
//f.setday(d);
//f.print();
//}

#include <bits/stdc++.h>
using namespace std;

//Define a structure
struct product {
    string name;
    float price;
    int amount;
};

// Define a function that takes a pointer to a structure
void modifyProduct(product*p){
    p->name = "orange";
    p->price = 100;
    p->amount = 6;
}
int main() {
    product *p, thing;
    p = &thing;

    /* These are equivalent */
    thing.name = "mango"; // dot operator
    (*p).price = 50; // dereference & dot
    p -> amount = 3; // arrow operator


    cout << "first Pionter is:\n";
    cout << p->name << '\n';
    cout << p->price << '\n';
    cout << p->amount << '\n';


//====================================================================================================================================
    product *a;
    // Allocate memory for the structure pointer
    a = new product;
    a->name = "apple";
    a->price = 50.5;
    a->amount = 20;

    cout << "second Pionter is:\n";
    cout << a->name << '\n';
    cout << a->price << '\n';
    cout << a->amount << '\n';


//====================================================================================================================================

    *a = *p;
    cout << "third Pionter is:\n"; // equal first Pionter
    cout << a->name << '\n';
    cout << a->price << '\n';
    cout << a->amount << '\n';


//====================================================================================================================================
    modifyProduct(a);
    cout << "fourth Pionter is:\n";
    cout << a->name << '\n';
    cout << a->price << '\n';
    cout << a->amount << '\n';



//====================================================================================================================================
    p = a;
    cout << "fifth Pionter is:\n"; // equal fourth Pionter
    cout << p->name << '\n';
    cout << p->price << '\n';
    cout << p->amount << '\n';








    // Deallocate memory to prevent memory leaks
    delete a;

}
