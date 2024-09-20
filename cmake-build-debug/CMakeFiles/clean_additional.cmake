# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "0xSurfer_autogen"
  "CMakeFiles/0xSurfer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/0xSurfer_autogen.dir/ParseCache.txt"
  )
endif()
