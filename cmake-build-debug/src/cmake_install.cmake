# Install script for directory: /Users/steven/ClionProjects/LeetCode/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/steven/ClionProjects/LeetCode/cmake-build-debug/src/001.two-sum/cmake_install.cmake")
  include("/Users/steven/ClionProjects/LeetCode/cmake-build-debug/src/002.add-two-numbers/cmake_install.cmake")
  include("/Users/steven/ClionProjects/LeetCode/cmake-build-debug/src/003.longest-substring-without-repeating-characters/cmake_install.cmake")
  include("/Users/steven/ClionProjects/LeetCode/cmake-build-debug/src/004.median-of-two-sorted-arrays/cmake_install.cmake")

endif()

