#include <bits/stdc++.h>
using namespace std;
class Area{
    public:
    int side;
    int base , height;
    int radius;
    int l,b;
    void a(int l,int b){
        cout<<"rectangle :- "<<l*b<<endl;
    };
    void a(int radius){
        cout<<"circle:- "<<3.14*radius*radius<<endl;
    }
    void square(int side){
        cout<<"Square:- "<< side*side<<endl;
    }void trianlge(int base , int height){
        cout<<"Triangle:- "<<0.5*base*height<<endl;
    };
};

int main() {
    Area a1;
    a1.a(7);
    a1.a(3,4);
    a1.square(4);
    a1.trianlge(4,8);
 

    return 0;
}
