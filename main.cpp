#include <iostream>
#include <string>
#include <vector>


int main(){

    const int rowSize{2};
    const int columnSize{2};
    int inputList[4] = {1,2,3,4}; // comma separated list of the values of the matrix from left to right and up to down. 

    const int rows{rowSize}; // computes the number of rows in the matrix based on given number of rows (i)
    const int columns{columnSize}; // computes the number of columns in the matrix based on given number of columns (j)

    int matrix[rowSize][columnSize] = {{0, 0}, {0, 0}};
    
    int listCounter{0}; //counter that iterates through the list containing a row's columns.

    int row[rows] = {};
    int rowCounter{0}; //counter that iterates through the lists in the array based on the size of the array, i in i,j  matrix format.

    int col{0}; //column counter, same as j in ma

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
