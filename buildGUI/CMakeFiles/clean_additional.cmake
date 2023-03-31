# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/calculatorGUI_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/calculatorGUI_autogen.dir/ParseCache.txt"
  "calculatorGUI_autogen"
  )
endif()
