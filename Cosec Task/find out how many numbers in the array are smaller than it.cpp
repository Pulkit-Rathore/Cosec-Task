#include <iostream>

int main() {
    int numbers[100];
    int output[100];
    int length;
    std::cout << "Enter the size of an array\n";
    std::cin >> length;
    std::cout << "Enter the elements of array\n";
    for(int i=0; i<length; i++)
    {
        std::cin >> numbers[i];   
    }
    

    int smaller_digits;
    for(int i=0; i<length; i++)
    {
        smaller_digits = 0;
        for(int j=0; j<length; j++)
        {
            if(numbers[i]>numbers[j])
            {
                smaller_digits++;
            }
        }
        output[i] = smaller_digits;
        std::cout << output[i];
    }
    
    
    return 0;
}