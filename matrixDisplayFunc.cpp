#include "matrixDisplayFunc.h"

int matrixDisplayFunc(rows, columns) {
  for (int i = 0; i < rows ;i++){
        for(int j = 0; j < columns; j++) {
        std::cout << matrix[i][j] << " ";
    }
        std::cout << "\n";
        }
    }
  return 0;
}
