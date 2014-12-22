include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
)

set(CORROTATIONAL_FEM_SRCS 
	corotationalLinearFEM.cpp
)

if(BUILD_MULTI_THREADED)
	list(APPEND CORROTATIONAL_FEM_SRCS
		corotationalLinearFEMMT.cpp
	)
endif(BUILD_MULTI_THREADED)

add_library(corotationalLinearFEM ${CORROTATIONAL_FEM_SRCS})
target_link_libraries(corotationalLinearFEM polarDecomposition volumetricMesh sparseMatrix)


if(BUILD_MULTI_THREADED)
	target_link_libraries(corotationalLinearFEM ${CMAKE_THREAD_LIBS_INIT})
endif(BUILD_MULTI_THREADED)
