#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

/*
  Authenticates a user
*/

int main(int argc,char **argv)
{
    std::string user,line,password;
    while(true){
    std::ifstream infile("user");
    std::getline(infile,line);
    std::cout<<"Enter username"<<std::endl;
    std::cin>>user;
    if(user.compare(line) == 0){
        std::ifstream infile("password");
        std::getline(infile,line);
        std::cout<<"enter password"<<std::endl;
        std::cin>>password;
        if(password.compare(line) == 0){
            std::cout<<"Sucess\n";
            return 0; 
        }
    }
    std::cout<<"FAIL"<<std::endl;
    }
}
