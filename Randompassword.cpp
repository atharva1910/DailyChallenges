#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
/*
  Random password generator
*/

void get_random(char *s,int num)
{
    std::srand(std::time(0));
    static const char alphabet[]=
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    int i=0;
    for(i=0;i<num;i++){
        s[i]=alphabet[std::rand() % (sizeof(alphabet)-1)];
    }
    s[++i]=0;
    for(int n=0;n<=i;n++){
        std::cout<<s[n];
    }
    std::cout<<std::endl;
}
            
int main(int argc,char **argv)
{
    int n;
    char s[50];
    std::cout<<"Enter the number of characters \n";
    std::cin>>n;
    get_random(s,n);
}

