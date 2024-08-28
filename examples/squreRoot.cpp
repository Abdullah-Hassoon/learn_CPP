#include <iostream>

float calculateRectangleArea(int side, int d);
float squreRoot(int);
int readNumber();

int main() {
    // Write C++ code here
    int side = readNumber();
    int d = readNumber();
    
    std::cout << "Area: " << calculateRectangleArea(side, d) << '\n';
    
}

// Function to input a number
int readNumber(){
    
    int num;
    std::cout << "Number: ";
    std::cin >> num;
    
    return num;
}

// calcuate the rectangle area through area = side * sqrt(dagnol^2 - side^2)
float calculateRectangleArea(int side, int d){
    int num = d * d - side * side;
    return side * squreRoot(num);    
}

// calcuate the sqrt of num
float squreRoot(int num){
    int sub = 1, count = 0;
    
    while(num != 0){
        num -= sub;
        
        sub += 2;
        count ++;
    }
    
    return count;
}
