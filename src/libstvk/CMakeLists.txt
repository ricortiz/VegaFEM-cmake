include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
)

set(STVK_SRCS
 StVKCubeABCD.cpp
 StVKElementABCD.cpp
 StVKElementABCDLoader.cpp
 StVKHessianTensor.cpp
 StVKInternalForces.cpp
 StVKStiffnessMatrix.cpp
 StVKTetABCD.cpp
 StVKTetHighMemoryABCD.cpp
)

if(BUILD_MULTI_THREADED)
	list(APPEND STVK_SRCS
	 StVKInternalForcesMT.cpp
	 StVKStiffnessMatrixMT.cpp
	)
endif(BUILD_MULTI_THREADED)

add_library(stvk ${STVK_SRCS})
target_link_libraries(stvk minivector volumetricMesh sparseMatrix)

if(BUILD_MULTI_THREADED)
	target_link_libraries(stvk ${CMAKE_THREAD_LIBS_INIT})
endif(BUILD_MULTI_THREADED)
