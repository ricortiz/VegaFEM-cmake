
foreach(lib ${VEGA_CORE_LIBRARIES})
  add_subdirectory(lib${lib})
endforeach()

option(BUILD_UTILITIES "Build utility applications." ON)

if(BUILD_UTILITIES)
  add_subdirectory(util)
endif(BUILD_UTILITIES)
