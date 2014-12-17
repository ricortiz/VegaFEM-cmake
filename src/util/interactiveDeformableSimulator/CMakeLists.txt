
include_directories(${GLUI_INCLUDE_DIR})

add_executable(deformsim interactiveDeformableSimulator.cpp initGraphics.cpp)
target_link_libraries(deformsim sceneObject integrator integratorSparse
elasticForceModel forceModel sparseMatrix loadList insertRows lighting configFile
volumetricMesh getopts camera graph isotropicHyperelasticFEM minivector stvk
corotationalLinearFEM polarDecomposition massSpringSystem objMesh sparseSolver
${CMAKE_THREAD_LIBS_INIT}
${OPENGL_gl_LIBRARY} ${GLUT_glut_LIBRARY} ${OPENGL_glu_LIBRARY} ${GLUI_LIBRARY})

