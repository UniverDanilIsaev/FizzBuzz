#include <iostream>
#include <string>

void FizzBuzz()
{
    for (int i = 1; i <= 100; i++)
    {
        std::string str = (i % 15 == 0) ? "FizzBuzz" : (i % 3 == 0) ? "Fizz" : (i % 5 == 0) ? "Buzz" : std::to_string(i);
        std::cout << str << std::endl;
    }
}
int main()
{
    FizzBuzz();
}


