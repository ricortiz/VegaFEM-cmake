include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
)

set(MSS_SRCS
 massSpringSystemFromObjMeshConfigFile.cpp
 massSpringSystemFromObjMesh.cpp
 massSpringSystemFromTetMeshConfigFile.cpp
 massSpringSystemFromTetMesh.cpp
 massSpringSystem.cpp
 massSpringSystemFromCubicMesh.cpp
 massSpringSystemFromCubicMeshConfigFile.cpp
)
if(OPENGL_FOUND AND GLUT_FOUND)
 list(APPEND MSS_SRCS
  renderSprings.cpp
  )
endif()

if(BUILD_MULTI_THREADED)
	list(APPEND MSS_SRCS
 		massSpringSystemMT.cpp
	)
endif(BUILD_MULTI_THREADED)

add_library(massSpringSystem ${MSS_SRCS})
target_link_libraries(massSpringSystem objMesh volumetricMesh configFile sparseMatrix)

if(OPENGL_FOUND AND GLUT_FOUND)
  target_link_libraries(massSpringSystem ${OPENGL_gl_LIBRARY} ${OPENGL_glu_LIBRARY})
endif()
