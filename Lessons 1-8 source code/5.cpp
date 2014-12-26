#include <iostream>

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int subtract(int a, int b)
{
 	int c;
  	c=a-b;
 	return c;
}

int multiply(int a, int b)
{
 	int c;
  	c=a*b;
 	return c;
}

int divide(int a, int b)
{
 	int c;
  	c=a/b;
 	return c;
}

int main()
{
    int a, b;
    std::cout<<"a:"<<std::endl;
    std::cin>>a;
    std::cout<<"b:"<<std::endl;
    std::cin>>b;
    std::cout<<"Add function: "<<add(a,b)<<std::endl;
    std::cout<<"Subtract function: "<<subtract(a,b)<<std::endl;
    std::cout<<"Multiply function: "<<multiply(a,b)<<std::endl;
    std::cout<<"Divide function: "<<divide(a,b)<<std::endl;
    system("PAUSE");
    return 1;
}
