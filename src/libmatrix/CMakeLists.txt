include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
)

set(MATRIX_SRCS
	matrixProjection.cpp
	matrixPCA.cpp
	matrixExp.cpp
	matrixBLAS.cpp
	matrixLAPACK.cpp
	matrix.cpp
	)

  add_library(matrix ${MATRIX_SRCS})
  target_link_libraries(matrix matrixIO ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES})
