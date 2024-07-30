#include <iostream>
#include <iomanip>
#include <string>
// int main(){
//     int age ;
//     std::string  name;

//     std::cout << "enter your name :";
//     std::cin>>name;

//     std::cout << "enter your age :";
//     std::cin>>age;

//     std::cout << "hello, " << name <<"your are"<<age<<"years old"<<std::endl;

//     return 0;

// }

// int main(){
//     std::clog <<"this is a log message."<<std::endl;
//     return 0;

// }

// int main(){
//     double pi = 3.14159;

//     std::cout<<std::setprecision(3)<<pi<<std::endl;

//     std::cout<<std::setw(10)<<std::left<<pi<<std::endl;
//     std::cout<<std::setw(10)<<std::right<<pi<<std::endl;


//     return 0;

// }
// int main(){
//     int num;
//     std::cout<<"entry a number: ";
//     std::cin>>num;

//     if (std::cin.fail()){
//         std::cout<<"Invalid input."<<std::endl;

//     }else{
//         std::cout<<"You entered: "<<num<<std::endl;
//     }

//     return 0;

// }

int main(){
    std::string fullName;
    std::cout<<"Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout<<"Your full name is: "<<fullName<<std::endl;

    return 0;

}