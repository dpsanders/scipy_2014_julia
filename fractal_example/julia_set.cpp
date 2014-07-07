#include <complex>

using namespace std;

int julia(complex<double> z, complex<double> c, int maxiter=200) {
    for (int n=1; n<=maxiter; n++) {
        //if ( (z.real()*z.real() + z.imag()*z.imag()) > 4.) {
        if (abs(z) > 2.) {
            return n-1;
        }

        z = z*z + c;
    }

    return maxiter;
}

int main()
{
    for (double i=1; i >= -1; i -= 0.002) {
        for (double r=-1.5; r <= 1.5; r += 0.002) {
            julia(complex<double>(r, i), complex<double>(-.06, .67));

        }
    }
}