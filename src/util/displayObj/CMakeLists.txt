
add_executable(displayObj displayObj.cpp)
target_link_libraries(displayObj getopts objMesh imageIO glslPhong camera matrixIO lighting configFile loadList
${OPENGL_gl_LIBRARY} ${GLUT_glut_LIBRARY} ${OPENGL_glu_LIBRARY} ${GLUI_LIBRARY} ${GLEW_LIBRARIES})

add_executable(objMergeFiles objMergeFiles.cpp)
target_link_libraries(objMergeFiles getopts objMesh imageIO glslPhong camera matrixIO lighting configFile loadList
${OPENGL_gl_LIBRARY} ${GLUT_glut_LIBRARY} ${OPENGL_glu_LIBRARY} ${GLUI_LIBRARY} ${GLEW_LIBRARIES})
