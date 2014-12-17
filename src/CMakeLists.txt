
foreach(lib ${VEGA_CORE_LIBRARIES})
  add_subdirectory(lib${lib})
endforeach()

if(BUILD_UTILITIES)
  add_subdirectory(util)
endif(BUILD_UTILITIES)
