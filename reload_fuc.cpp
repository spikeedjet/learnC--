
#include <iostream>

using namespace std;

class printData{
    public:
        void print(int i){
            cout << "Interger:" <<i << endl;

        }
        void print(double f){
            cout << "Double:" << f << endl;
        }

        void print (char c[]){
            cout << "Character:" << c << endl;
        }
};

// int main(){
//     printData pd;
//     pd.print(5);
//     pd.print(500.263);
//     pd.print("Hello C++");
//     return 0;
// }

class Box
{
    public:

        double getVolume(void){
            return length*breath*height;
        }

        void setLength(double len){
            length = len;
        }

        void setBreadth(double bre){
            breath = bre;
        }

        void setHeight(double hei){
            height = hei;
        }

        Box operator+(const Box& b)
        {
            Box box;
            box.length = this->length + b.length;
            box.breath = this->breath + b.breath;
            box.height = this->height + b.height;
            return box;

        }

        private:
            double length;
            double breath;
            double height;
};


int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    Box1.setLength(6.0); 
    Box1.setBreadth(7.0); 
    Box1.setHeight(5.0);

    // Box2 详述
    Box2.setLength(12.0); 
    Box2.setBreadth(13.0); 
    Box2.setHeight(10.0);

    volume = Box1.getVolume();
    cout << "Volume of Box1:" << volume << endl;

    volume = Box2.getVolume();
    cout << "Volume of Box2:" << volume << endl;
    
    Box3 = Box1 + Box2;

    volume = Box3.getVolume();
    cout << "Volume of Box3:" << volume << endl;

    return 0;
}