#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

struct PointLoad {
    vec p, f;

    PointLoad (vec Point = zeros<vec>(3), vec forc = zeros<vec>(3)) {
        p = Point;
        f = forc;
    };

    vec force ( ) {
        return f;
    };

    vec moment ( ) {
        return cross(p, f);
    };
};

int main ( ) {
    mat a = {1, 1, 1};
    mat A = {{1, -1, 1}, {-1, 1, 0}};
    mat I = eye(3, 3);
    mat b = join_cols(a, A);
    b.i().print();
    (b.i() * vec({1, 2, 3})).print();
    cout << endl << endl;
    PointLoad pl({1, 2, 3}, {4, 5, 6});
    pl.force().print();
    pl.moment().print();
    return 0;
}
