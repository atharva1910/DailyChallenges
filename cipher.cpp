#include <string>
#include <iostream>
/*
  Ceaser cipher
*/
int main(int argc, char **argv)
{
    int n,i=0;
    std::string text;
    std::cout<<"Enter the shift\n";
    std::cin>>n;
    std::cout<<"Enter the text\n";
    std::cin>>text;
    while(text[i]){
        text[i]=text[i]+n;
        i++;
    }
    std::cout<<text<<std::endl;
}
