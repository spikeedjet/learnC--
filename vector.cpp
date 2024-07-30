#include <vector>
#include <iostream>

using namespace std;

// std::vector<int> myVector;

// std::vector<int> myVector(5);

// std::vector<int> myVector(5, 10);



// myVector.push_back(7)


// int x = myVector[0];
// int y = myVector.at(1);

// int size = myVector.size();

// for (auto it = myVector.begin(); it != myVector.end(); ++it){
//     srd::cout<<*it<< "";
// }

// for (int element:myVector){
//     std::cout<<element<<"";

// }

// myVector.clear();
// myVector.erase(myVector.begin()+2);



int main(){

    std::vector<int> myVector;

    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(11);
    myVector.push_back(5);


    std::cout<<"element in vector: ";
    for (int element : myVector){
        std::cout<<element<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"first element:"<<myVector[0]<<std::endl;
    std::cout<<"second element:"<<myVector.at(1)<<std::endl;

    std::cout<<"size of vector:"<<myVector.size()<<std::endl;

    myVector.erase(myVector.begin()+2);

    std::cout<<"element in vector after erase: ";
    for (int element : myVector){
        std::cout<<element<<" ";
    }
    std::cout<<std::endl;

    myVector.clear();
     std::cout<<"size of vector after clear:"<<myVector.size()<<std::endl;

}   