include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
)

set(MSS_SRCS
 massSpringSystemFromObjMeshConfigFile.cpp
 massSpringSystemFromObjMesh.cpp
 massSpringSystemFromTetMeshConfigFile.cpp
 massSpringSystemFromTetMesh.cpp
 massSpringSystemMT.cpp
 massSpringSystem.cpp
 renderSprings.cpp
 massSpringSystemFromCubicMesh.cpp
 massSpringSystemFromCubicMeshConfigFile.cpp
)

add_library(massSpringSystem ${MSS_SRCS})
target_link_libraries(massSpringSystem objMesh volumetricMesh configFile sparseMatrix)
