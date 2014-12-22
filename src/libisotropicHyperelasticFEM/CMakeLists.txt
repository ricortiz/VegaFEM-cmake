include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
)

set(IHFEM_SRCS
 isotropicMaterial.cpp
 MooneyRivlinIsotropicMaterial.cpp
 neoHookeanIsotropicMaterial.cpp
 StVKIsotropicMaterial.cpp
 homogeneousMooneyRivlinIsotropicMaterial.cpp
 homogeneousStVKIsotropicMaterial.cpp
 homogeneousNeoHookeanIsotropicMaterial.cpp
 isotropicHyperelasticFEM.cpp
 isotropicMaterialWithCompressionResistance.cpp
)

if(BUILD_MULTI_THREADED)
	list(APPEND IHFEM_SRCS
 	isotropicHyperelasticFEMMT.cpp
	)
endif(BUILD_MULTI_THREADED)

add_library(isotropicHyperelasticFEM ${IHFEM_SRCS})
target_link_libraries(isotropicHyperelasticFEM minivector volumetricMesh sparseMatrix)

if(BUILD_MULTI_THREADED)
	target_link_libraries(isotropicHyperelasticFEM ${CMAKE_THREAD_LIBS_INIT})
endif(BUILD_MULTI_THREADED)
