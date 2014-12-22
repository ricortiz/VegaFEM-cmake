include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
	)

set(RSTVK_SRCS
	StVKReducedInternalForces.cpp
	StVKReducedStiffnessMatrix.cpp
	StVKReducedHessianTensor.cpp
	)


if(BUILD_MULTI_THREADED)
	list(APPEND RSTVK_SRCS
		StVKReducedInternalForcesMT.cpp
	)
endif(BUILD_MULTI_THREADED)

add_library(reducedStvk ${RSTVK_SRCS})
target_link_libraries(reducedStvk stvk modalMatrix matrix)

if(BUILD_MULTI_THREADED)
	target_link_libraries(reducedStvk ${CMAKE_THREAD_LIBS_INIT})
endif(BUILD_MULTI_THREADED)
