#include <iostream>
#include <array>

using namespace std;


int main(int argc, char const *argv[])
{
    array<int,5> myArray = {1,2,3,4,5};
    for (const auto& value : myArray){
        cout<<value<<" ";

    }
    cout<<endl;

    cout<<"Element at index 2:" << myArray.at(2)<<endl;
    cout<<"Element size:" << myArray.size()<<endl;

    myArray[3] = 10;
    for (const auto& value : myArray){
        cout<<value<<" ";

    }
    cout<<endl;


    return 0;
}
