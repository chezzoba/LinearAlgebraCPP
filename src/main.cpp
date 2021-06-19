#define ARMA_NO_DEBUG
#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;


int main ( ) {
    mat a = {1, 1, 1};
    mat A = {{1, -1, 1}, {-1, 1, 0}};
    mat I = eye(3, 3);
    mat b = join_cols(a, A);
    b.i().print();
    (b.i() * vec({1, 2, 3})).print();
    return 0;
}
