#include <iostream>
#include <sstream>

// int main(){
//     std::string data = "10 20.5 ed";
//     std::istringstream iss(data);

//     int i;
//     double d;
//     std::string s;

//     iss >> i >> d >> s;

//     std::cout << "i: " << i << ", d: " << d << ", s: " << s << std::endl;

//     return 0;
// }

int main(){
    std::ostringstream oss;
    int i = 100;
    double d = 200.5;

    oss << i << " "<< d;

    std::string result = oss.str();

    std::cout << "Result: " << result << std::endl;

    return 0;
}

