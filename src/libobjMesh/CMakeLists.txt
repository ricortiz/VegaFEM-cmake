include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
)

set(OBJ_SRCS
	boundingBox.cpp
   objMesh.cpp
	objMesh-disjointSet.cpp
   objMeshBinaryLoader.cpp
   objMeshEncode.cpp
	objMeshGraph.cpp
	objMeshOctree.cpp
	objMeshOffsetVoxels.cpp
	objMeshOrientable.cpp
   objMeshRender.cpp
	octree.cpp
	simpleSphere.cpp
	triangle.cpp
	tribox3.cpp
)

add_library(objMesh ${OBJ_SRCS})
target_link_libraries(objMesh minivector matrixIO imageIO sparseMatrix graph ${OPENGL_gl_LIBRARY} ${OPENGL_glu_LIBRARY})
