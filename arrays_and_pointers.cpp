#include <iostream>
#include <string>

int main(){
    int arr[5] = {};
    int num = 1;

    for (int i=0; i<5;i++){
        arr[i] =num;
        num++;
        std::cout << "The value of is "<<arr[i]<<std::endl;
    }
    return 0;
}