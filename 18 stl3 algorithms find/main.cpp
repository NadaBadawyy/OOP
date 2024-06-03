#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_sr(int a , int b, int t, int arr[]){ // a-> begin b->end
    int low=a, high =b, mid= (a+b)/2;
    if(t<arr[mid]) {
        high=mid-1;
        binary_sr(low , high,  t, arr);
    }
    else if(t>arr[mid]){
        low=mid+1;
        binary_sr(low , high,  t, arr);
    }
    else if(t==arr[mid]){
      return mid;
    }
    else return -1;
}

class nada{
    int a,b;
public:
    nada(int x=0, int y=0):a(x),b(y){}
    int geta(){
        return a;
    }
    friend bool operator<(nada n1, nada n2){
        return n1.a<n2.a;
    }
};

bool comp(nada a, nada b){
    return a.geta()>b.geta();
}
class task{
    int a; string b;
    vector<task>v;
public:
    task(int x, string y):a(x),b(y){}
    friend bool operator<(task n1, task n2){
        return n1.a<n2.a;

    }
    friend bool operator>(task n1, task n2){
        return n1.a>n2.a;

    }
    // c1[0]
//    friend ostream&operator<<(ostream &out,task &c1){
//        out<<c1.a<<" "<<c1.b<<endl;
//        return out;
//    }
     pair<int ,string> operator[](int i){
     return {this->a, this->b} ;
    }
};
int main() {

/*    vector<int> v{ 1, 1, 2, 3, 5, 8, 13 };
    auto it = find(v.cbegin(), v.cend(),5);
    if (it != v.cend()) {
        cout << "Item " << (it - v.cbegin());// index find --> it =v.begin()+index
        cout << " is " << *it << '\n';
    } else {
        cout << "Item 8 is not in vector.\n";
    }*/


/*
    vector<int> v{ 1, 1, 2, 3, 5, 8, 13 };
    auto it = find_if(v.cbegin(), v.cend(),
                 [](int const n) {return n > 10; });
    while (it != v.cend()) {
        cout << "Item " << (it - v.cbegin());
        cout << " is " << *it << " > 10\n";
        it = find_if(it + 1, v.cend(),
                     [](int const n) {return n > 10; });
    }
    cout << "No more items > 10\n";
    */


     /*vector<int> v{ 1, 1, 2, 3, 5, 8, 13 };
     auto it = find_if_not(v.cbegin(), v.cend(),
                      [](int const n) {return (n % 2) == 0;});
     while (it != v.cend()) {
         cout << "Item " << (it - v.cbegin());
         cout << " is " << *it << " NOT even.\n";
         it = find_if_not(it + 1, v.cend(),
                          [](int const n) {return (n % 2) == 0;});
     }*/


  /*  vector<int> v1{ 1, 1, 2, 3, 0, 8, 13 }; // in common bet 2 v first item
    vector<int> v2 = {5, 8, 12};
    auto it = find_first_of(v1.cbegin(), v1.cend(),
                       v2.begin(), v2.end());
    if (it != v1.cend()) {
        cout << "Item " << (it - v1.cbegin());
        cout << " is " << *it;
        cout << " from v2 found in v1\n\n";
  }
*/

//      auto text = "The quick brown fox jumps over the lazy dog"s;
//      auto word = "over"s;
//    cout << text << "\" at " << text.find(word); // return index
//

/*    vector<int> vec = {10,20,10,10,30,30,30,20};
    vector<int>::iterator it;
     it = search_n (vec.begin(), vec.end(), 2, 10); // العشرات اللي جنب بعض 2
    if (it != vec.end()) {
        cout << "two 30s found at position ";
        cout << (it - vec.begin()) << '\n';
    } else
    cout << "match not found\n";*/


/*   vector<int> v{ 1,1,0,0,1,0};
    sort(v.begin(),v.end());
    auto bounds = equal_range
            (v.cbegin(), v.cend(), 1); //subrange اللي في 1
    cout << "range between: ";
    cout << bounds.first - v.begin() << " ";
    cout << bounds.second - v.begin();*/


/*
vector<int>x{1,17,3,8,2,9};
sort(x.begin(),x.end(),[](int a, int b){
    cout<<a<<" "<<b<<endl;
    return a%2;
});
    for(auto s:x)cout<<s<<" ";
*/

/*vector<nada>v;
v.push_back(nada(1,2));
    v.push_back(nada(3,7));
    v.push_back(nada(4,6));
    v.push_back(nada(5,2));
    v.push_back(nada(7,3));
    v.push_back(nada(1,6));
   sort(v.begin(), v.end(),[](nada x1, nada x2){// by lamda(internal) funtion
     return x1.geta()>x2.geta();
    });
   sort(v.begin(), v.end(),comp);// call back sort by external fun

  sort(v.begin(),v.end());// operator <*/

  /*  vector<task> v{
            { 10, "Task 1"s }, { 40, "Task 2"s },
            { 25, "Task 3"s }, { 10, "Task 6"s },
            { 80, "Task 5"s }, { 10, "Task 4"s },
    };
    stable_sort (v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i].operator[](i).first<<" "<<v[i].operator[](i).second<<endl;
    }*/

 /*   vector<int> v{1,1,1,1,1,1,1,1};
    for (auto i: v)
        cout << i << " ";
    cout << endl << endl;
    srand ( unsigned ( time(0) ) );
    for (int i = 0; i < 10; i++) {
        generate (v.begin(), v.end(), [&v]()
        { return (rand()%100);});
        for (auto item: v)
            cout << item << " ";
        cout << endl;
    }*/

   /* vector<int> v{1,1,1,1,1,1,1,1};
    auto i = 1;
    generate_n(v.begin(), v.size(), [&i] ()
    { return i*i++; });
    for (auto item: v)
        cout << item << " ";
    cout << endl;*/

/*vector<int> v1{ 1, 2, 3, 4, 4, 5 };
vector<int> v2{ 2, 3, 3, 4, 6, 8 };
vector<int> v3(5);
merge (v1.cbegin(), v1.cend(),
v2.cbegin(), v2.cend(),
back_inserter(v3)) ;
for(auto s:v3)cout<<s<<" "; //v3= 00000 122333444567*/
/*    vector<int> v1{ 1, 2, 3, 4, 4, 5 };
    vector<int> v2{ 2, 3, 3, 4, 6, 8 };
    vector<int> v3(5);
    set_intersection
            (v1.cbegin(), v1.cend(),
             v2.cbegin(), v2.cend(),
             back_inserter(v3));
    for(auto s:v3)cout<<s<<" ";*/

/*    vector<int> v{ 1,2,3,4,5 };
    fill_n (inserter(v, v.begin()+3), 3, 0);
     // v = {1,2,3,0,0,0,4,5}
     for(auto s:v)cout<<s<<" ";*/


/*int a[]{1,2,3,4,5,6,7};
vector<int>v(a,a+7);
if(equal(v.begin(),v.end(),a,[](int i, int j){return i==j;})){
    cout<<"all contents are equal"<<endl;
}
v[3]=12;
    if(equal(v.begin(),v.end(),a,[](int i, int j){return i==j;})){
        cout<<"all contents are equal"<<endl;
    }
    else cout<<"not equal\n";*/
/* vector<int>v1{1,2,3,4,5,6};
 vector<int>v2{2,1,4,3,6,5};
 if(is_permutation(v1.begin(),v1.end(),v2.begin())){
     cout<<"permuted\n";*/
int a[5]={1,2,3,4,5};
   cout<< binary_sr(0,4,10,a);

}
