#include <iostream>
#include <string>
#include <cmath>
#include <vector>


int main(){

    const int edgeSize{2};
    int inputList[4] = {1,2,3,4};

    //std::cin >> num;
    ///std::string numStr = std::to_string(num);
    //int numLength = numStr.length();

    const int rows{edgeSize};
    const int columns{edgeSize};

    int matrix[edgeSize][edgeSize] = {{0, 0}, {0, 0}};;

    //for (char digit : numStr) {
    //int currentDigit = digit - '0'; // Convert char to int
    //}

    int listCounter{0};

    int row[rows] = {};
    int rowCounter{0};

    int col{0};

    while (listCounter < rows * columns){
       if(col < columns)
       {
           matrix[rowCounter][col] = inputList[listCounter];
           col += 1;
           listCounter += 1;
       }
       else if (col == columns)
       {
           col = 0;
           rowCounter += 1;
       }
    }
    for (int i = 0; i< rows ;i++){
        for(int j = 0; j < columns; j++) {
        std::cout << matrix[i][j] << " ";
    }
        std::cout << "\n";
        }
    }
