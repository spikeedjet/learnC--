#include <iostream>
 
using namespace std;
 
// """好处
// 强制实现：纯虚函数确保所有派生类都实现特定的方法，从而保持接口一致性。
// 接口分离：基类定义接口，派生类实现具体功能，有助于代码的模块化和可维护性。
// 灵活性：通过基类指针或引用，可以操作不同派生类对象，实现运行时多态性。"""

// 基类
class Shape 
{
public:
   // 提供接口框架的纯虚函数
//    virtual int getArea() = 0;
   void setWidth(int w)
   {
      width = w;
   }
   void setHeight(int h)
   {
      height = h;
   }
protected:
   int width;
   int height;
};
 
// 派生类
class Rectangle: public Shape
{
public:
   int getArea()
   { 
      return (width * height); 
   }
};
class Triangle: public Shape
{
public:
   int getArea()
   { 
      return (width * height)/2; 
   }
};
 
int main(void)
{
   Rectangle Rect;
   Triangle  Tri;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   // 输出对象的面积
   cout << "Total Rectangle area: " << Rect.getArea() << endl;
 
   Tri.setWidth(5);
   Tri.setHeight(7);
   // 输出对象的面积
   cout << "Total Triangle area: " << Tri.getArea() << endl; 
 
   return 0;
}