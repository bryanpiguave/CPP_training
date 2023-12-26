#include <iostream>

int main(){
    int grid[3][3];
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            grid[i][j]=i+j;
            std::cout << "grid["<< i <<"]["<<j<<"]: "<<grid[i][j] <<std::endl;
        }
    }
    return 0;
}