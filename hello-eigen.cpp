#include <iostream>
#include <stdlib.h>

#include <Eigen/Sparse>

using Eigen::SparseMatrix;

#ifdef RANDOM_SEED
  static int const _RANDOM_SEED = RANDOM_SEED;
#else
  static int const _RANDOM_SEED = 42;
#endif

#ifdef THRESHOLD
  static int const _THRESHOLD = THRESHOLD;
#else
  static int const _THRESHOLD = 20;
#endif

#ifdef M_MAX
  static int const _M_MAX = M_MAX;
#else
  static int const _M_MAX = 1024;
#endif

#ifdef N_MAX
  static int const _N_MAX = N_MAX;
#else
  static int const _N_MAX = 1024;
#endif

int main()
{
  SparseMatrix<int> left(_M_MAX, _N_MAX), right(_M_MAX, _N_MAX);
  int i = 0, j=0;

  srand(_RANDOM_SEED);

  for (i=0; i<_M_MAX; i++) {
    for (j=0; j<_N_MAX; j++) {
      if (_THRESHOLD > rand() % 100)
        left.insert(i, j) = 1;
      if (_THRESHOLD > rand() % 100)
        right.insert(i, j) = 1;
    }
  }
  std::cout << left * right << std::endl;
}
