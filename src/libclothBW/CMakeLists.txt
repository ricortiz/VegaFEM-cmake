include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
)

set(CLOTHBW_SRCS
	clothBW.cpp
	clothBWFromObjMesh.cpp
)

if(BUILD_MULTI_THREADED)
	list(APPEND CLOTHBW_SRCS
		clothBWMT.cpp
)
endif(BUILD_MULTI_THREADED)

add_library(clothBW ${CLOTHBW_SRCS})
target_link_libraries(clothBW minivector objMesh sparseMatrix)

if(BUILD_MULTI_THREADED)
	target_link_libraries(clothBW ${CMAKE_THREAD_LIBS_INIT})
endif(BUILD_MULTI_THREADED)
