
#FindGLUI
find_package(GLUI QUIET)

if(NOT GLUI_INCLUDE_DIR OR NOT GLUI_LIBRARY)
  add_subdirectory(other/glui/glui-2.35/src)
  set(GLUI_LIBRARY glui)
  set(GLUI_INCLUDE_DIR other/glui/glui-2.35/src/include)
endif(NOT GLUI_INCLUDE_DIR OR NOT GLUI_LIBRARY)

include_directories(${GLUI_INCLUDE_DIR})

if(LAPACK_FOUND AND BLAS_FOUND)
  add_subdirectory(largeModalDeformationFactory)
  add_subdirectory(reducedDynamicSolver-rt)
endif(LAPACK_FOUND AND BLAS_FOUND)
add_subdirectory(displayObj)
add_subdirectory(interactiveDeformableSimulator)
add_subdirectory(volumetricMeshUtilities)
