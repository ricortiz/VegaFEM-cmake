
set(include_dirs)
foreach(mod ${VegaFEM_Modules})
  add_subdirectory(lib${mod})
  list(APPEND include_dirs ${CMAKE_CURRENT_SOURCE_DIR}/lib${mod})
endforeach()

set(VegaFEM_INCLUDE_DIRS ${include_dirs} CACHE INTERNAL "VegaFEM Libs includes" FORCE)

if(BUILD_UTILITIES)
  add_subdirectory(util)
endif(BUILD_UTILITIES)
