#include <iostream>

using namespace std;

class Shape{
    protected:
        int width,height;
    public:
        Shape(int a=0 , int b=0)
        {
            width = a;
            height = b;
        }
        // virtual int  area()
        // {
        //     cout << "Parent class area :" <<endl;
        //     return 0;
        // }
        virtual int area() = 0;
};

class Rectangle: public Shape{
    public:
        Rectangle(int a=0, int b=0):Shape(a,b){}
        int area () override {
            cout << "Rectangle class area :" << endl;
            return (width*height);
        }
};

class Triangle: public Shape{
    public:
        Triangle (int a= 0, int b=0):Shape(a,b){}
        int area() override {
            cout<<"Triangle class area:"<<endl;
            return (width*height/2);
        }
};

int main(){


    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);

    shape = &rec;

    shape->area();

    shape = &tri;

    shape->area();

    // rec.area();

    // tri.area();

    return 0;


}