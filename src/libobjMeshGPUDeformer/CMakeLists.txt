include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
	)

set(OBJMESHBGPUDEFORMER_SRCS
	objMeshGPUDeformer.cpp
	objMeshGPUDeformer_coarseToFine.cpp
	objMeshGPUDeformer_coarseToFine_fbo.cpp
	objMeshGPUDeformer_uUq.cpp
	objMeshGPUDeformer_uUq_fbo.cpp
	objMeshGPUDeformer_uUq_pbuffer.cpp
	objMeshGPUDeformer_uUq_setLighting.cpp
	vbo.cpp
	)

add_library(objmeshbgpudeformer ${OBJMESHBGPUDEFORMER_SRCS})
target_link_libraries(objmeshbgpudeformer objMesh lighting)
