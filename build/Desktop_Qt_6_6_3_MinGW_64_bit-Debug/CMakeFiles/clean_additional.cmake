# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Laba3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Laba3_autogen.dir\\ParseCache.txt"
  "Laba3_autogen"
  )
endif()
