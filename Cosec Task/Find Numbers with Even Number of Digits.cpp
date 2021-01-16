#include <iostream>

int countDigits(int n)
{
    int count = 0;
    while(n!=0)
    {
        if (n == 0)
            return 0;
        return 1 + countDigits(n / 10);
    }
    
    return count;
}

int main() {
    int numbers[100];
    int length;
    std::cout << "Enter the size of an array\n";
    std::cin >> length;
    std::cout << "Enter the elements of array\n";
    for(int i=0; i<length; i++)
    {
        std::cin >> numbers[i];   
    }
    
    int even_digit_numbers = 0;
    for(int i=0; i<length; i++)
    {
        if(countDigits(numbers[i])%2==0)
        {
            even_digit_numbers++;
        }
    }
    
    std::cout << even_digit_numbers;
    return 0;
}