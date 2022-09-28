#include <bits/stdc++.h>
using namespace std;
class Volume{
    public:
    int side;
    float radius;
    int height;
    void vol(int side){
        int volume = side*side*side;
        cout<<"volume of cube is :- "<<volume<<endl;
    };
    void vol(float radius){
        auto volume= 3.14*4/3*radius*radius*radius;
        cout<<"volume of sphere is :- "<<volume<<endl;
    };
    void vol(float radius,int height){
        auto volume= 3.14*radius*radius*height;
        cout<<"volume of cylinder is : -"<<volume<<endl;
    };
};

int main() {
    Volume cube,cylinder,sphere;
    float rad=6;
    cube.vol(3);
    sphere.vol(rad);
    cylinder.vol(3.0,5);

    return 0;
}
