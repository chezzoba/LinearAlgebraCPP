sudo yum install -y cmake3 openblas-devel lapack-devel arpack-devel SuperLU-devel

g++ main.cpp -o linalg -O2 -larmadillo -llapack -lblas && ./linalg 