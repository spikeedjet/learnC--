#include <iostream>
#include <iomanip>

// int main(int argc, char const *argv[])
// {
//     double pi = 3.1415926535;
//     std::cout << std::setprecision(3)<<pi<<std::endl;
//     return 0;
// }


// int main(int argc, char const *argv[])
// {
//     double num = 123456789.0;
//     std::cout << "fixed:"<<std::fixed<<num<<std::endl;
//     std::cout << "scientific:"<<std::scientific<<num<<std::endl;

//     return 0;
// }


int main(int argc, char const *argv[])
{
    std::cout<<std::setfill('*')<<std::setw(10)<<"hello"<<std::endl;
    return 0;
}
