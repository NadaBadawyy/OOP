#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class exceptionn{
    int arr[10];
public:
   exceptionn(){
       for (int i = 0; i < 10; ++i) {
           arr[i]=i;
       }
   }
   int getx(int x){
       if(x<0)throw small();
       else if(x>9)throw big();
       else return arr[x];
   }
   class small{
   public:
       void print(){
           cout<<" ----small\n";
       }
   };
   class big{
   public:
       void print(){
           cout<<" ----big\n";
       }
   };
};
int sum (int x){
    if(x<=0) throw 0;
    else cout<<x;
}
void PrintVector (const
                  vector<string> &myVector)
{
    for (vector<string>::const_iterator
                 itr = myVector.begin();
         itr != myVector.end();
         ++itr)
        cout << *itr << endl;
}
int main() {
/*    cout<<"the indx U want in range 0-->9\n";
    int n;
    exceptionn d;
    try{
        cin>>n;
        cout<<d.getx(n);
    }
    catch(exceptionn::small d){
//        cout<<"this a small number try a again 0-->9\n";
d.print();
    }
    catch(exceptionn::big s){
//        cout<<"this a big number try a again 0-->9\n";
       s.print();
    }*/

   /* int arr[]{1,2,3,5,6,7};
    int idx;
    try{
        cin>>idx;
        if(idx<0)throw"negtive number"s;
        else if (idx>6) throw 0;
        else cout<<arr[idx];

    }
    catch(string c){
        cerr<<c<<" not allowed\n";
    }
    catch(int i){
        cerr<<"out of range\n";
    }*/

/*    try {
        try {
            throw 20;
        }
        catch (int n) {
            cout << "Handle Partially ";
            throw; // Re-throwing an exception
        }
    }
    catch (int n) {
        cout << "Handle remaining ";
    }*/

}
