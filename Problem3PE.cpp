#include <iostream>
using namespace std;

int main(int argc, char** argv) 
    {
    long long num=600851475143;
    int i=2,res;

    for(i=2;i<(num/2);i++)
    {
        if(!(num%i) && num>0)
        {
            num=num/i;      
    }
    }
    std::cout<<" Biggest LCM is ="<<num;
    return 0;
}
