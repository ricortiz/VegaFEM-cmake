#if defined(WIN32) || defined(linux)
  #include <cblas.h>
//   #include "types.h"
//   #include <lapack.h>
//   #include <blas.h>
#elif defined(__APPLE__)
  #include <Accelerate/Accelerate.h>
#endif

