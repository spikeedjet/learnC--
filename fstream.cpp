#include <iostream>
#include <fstream>

// int main(){
//     std::fstream file;
//     file.open("example.txt",std::ios::out);

//     if (!file){
//         std::cerr<<"unable to open file"<<std::endl;
//         return 1;
//     }

//     file<<"hello world"<<std::endl;
//     file.close();

//     return 0;
// }

int main(){
    std::fstream file;
    file.open("example.txt",std::ios::app);

    if (!file){
        std::cerr<<"unable to open file"<<std::endl;
        return 1;
    }

    // std::string line;
    // while(getline(file,line)){
    //     std::cout<<line<<std::endl;

    // }
    file << "appending this line to the file"<<std::endl;


    file.close();

    return 0;
}

  