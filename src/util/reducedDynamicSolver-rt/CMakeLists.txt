
add_executable(reducedDynamicSolver-rt reducedDynamicSolver-rt.cpp initGraphics.cpp)
target_link_libraries(reducedDynamicSolver-rt objMeshGPUDeformer objMesh imageIO modalMatrix sceneObjectReduced sceneObject objMeshGPUDeformer objMesh imageIO integratorSparse integratorDense integrator reducedStvk stvk reducedElasticForceModel reducedForceModel forceModel matrix matrixIO lighting configFile volumetricMesh loadList getopts camera minivector openGLHelper
${CMAKE_THREAD_LIBS_INIT}
${OPENGL_gl_LIBRARY} ${GLUT_glut_LIBRARY} ${OPENGL_glu_LIBRARY} ${GLUI_LIBRARY})

