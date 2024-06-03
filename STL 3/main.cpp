#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
 auto add=[&](int a, int b)->int{
     return a+b;
 };

/*
 * add(4,3);//7
//[c](p){fd}
int d=3, e=2;// لو عاوزه اخلي ال d دي استخدمها جوا الفورايتش لازم احطها جوا دول []
// طب لو انا عاوزه اغير قيمتها جوا الفور لازم احطها by reference [&d]
vector<int>v{1,2,3,5,6,12,4};
for_each(v.begin(),v.end(),[&](int x){
    if(x%d) cout<<x<<" is not divisble by "<<d<<endl;
    else cout<<x<<" is divisble by "<<d<<endl;
    d=2;
 //   e=2; هيدي ايرور لاني مش حطاها &
 // ممكن لو عاوزه الاتنين ميتغيروش بحط بس [=]
 // اما لو عاوزه الاتنين ي pass by reference [&]
});
 */



/*    auto numbers =
            vector<int> {0, 2, -3, 5, -1, 6, 8, -4, 9};
    auto positives = count_if(
            begin(numbers), end(numbers),
            [](int const n) {return n > 0;});
 cout<<positives;
  //self call f  []() {cout << "Salam!";} ();*/

/*
  for (int i = 0; i < 10; ++i) {
        if([](int x){return !(x%2);}(i)){
            cout<<i<<endl;
        }
    }*/



 /*
  * cout<<"lamda returns"<<[](int x, int y){
        if(x>y) return x+y;
        else return x-y;
    }(12, 15);
*/

/* vector<int>j{-2,-3,-5,1,3,4,5,9,10};
   int min{1},max{8};
   auto range= count_if(j.begin(),j.end(),[=](int x){
       return x>=min&&x<=max;
   });
   cout<<range<<" ";*/

}



