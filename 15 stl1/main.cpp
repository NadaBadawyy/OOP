#include <iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename t,size_t n>
void print(const array<t,n>&a){
    for(auto s:a){
        cout<<s<<" ";
    }
}
class ahmed{
        int a,b;
    public:
        ahmed(int a,int b){
            this->a= a;
            this->b=b;
        }
        friend ostream&operator<<(ostream&out, ahmed&f){
            out<<f.a<<" "<<f.b<<endl;
        }
    };


int main() {
//array
   /* array<int,8> a={1,2,3,4,8,5,9,7};
    sort(a.begin(),a.end());
    print(a); */

//   vector
//vector<int>v={1,5,4,2,6};
//    auto it1=v.rend();// -->[][1][2][3]
//    it1--; //1
//    auto it2=v.rbegin();//[][1]...[6]<--
//    it2++;//2
//auto it=v.begin();
//*it=6; // CORRECT
//vector<int>::const_iterator t=v.begin();
// *t=9; WRONGGG CONST ITERATOR


//vector<ahmed>a(5,ahmed(1,3));
//for(auto ss:a)cout<<ss;// 1 3  1 3  1 3 ...


//int r[4]= {1,3,4,5};
//vector<int>b(r,r+4);// coping arr into vec
//cout<<b.capacity()<<" "<<b.size()<<endl;
//b.push_back(1);
//cout<<b.capacity()<<" "<<b.size()<<endl; // size inc by 1 and when cap=size cap=cap*2


//v.insert(v.begin()+2,13);//6 5 13 4 2 6
//int r[4]= {1,3,4,5};
//v.erase(v.begin(), v.begin()+2);
//v.insert(v.begin(),r,r+4); // 1 3 4 5 13..
//for(auto ss:v)cout<<ss<<' ';


//list

list<int>l{1,2,3,5};
list<int>l2{6,7,8};
l.merge(l2); // l=1 2 3 5 6 7 8, l2 empty!!
//l.splice(l.begin(),l2); //l= 6 7 8 1 2 3 5 , l2 empty!!
auto it=l.begin();
it++;
it++;
l.assign(l.begin(),it);
for(auto ss:l)cout<<ss<<" ";


}




