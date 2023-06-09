#include <iostream>

using namespace std;

int main()
{
    int dim,diag=1,first=0,second,offset=0;
    cout << "Determinant de ce ordin vrei sa calculezi? ";
    cin >> dim;
    int A[dim][dim];
    cout << "Introdu matricea mai jos:\n";
    for (int i=0; i<dim; i++) {
        for (int j=0; j<dim; j++) {
            cin >> A[i][j];
        }
    }

    // calculare determinant

    if (dim == 2) {
        cout << (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
    } else if (dim > 2) {
        // | 1 2 3 |
        // | 4 5 6 |
        // | 7 8 9 |

        // ((1 * 5 * 9) + ( 4 * 8 * 3) + (7 * 2 * 6)) - ((3 * 5 * 7) + (6 * 8 * 1) + (9 * 2 * 4))
        while (offset < dim) {
            for (int i=0; i<dim; i++) {
                diag *= A[(2*i)%dim][(2*i)%dim];
            }
            first += diag;
            // diag = 1;
            // offset++;
        }
    }
    cout << first;
}
