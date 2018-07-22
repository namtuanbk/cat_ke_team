cmake_minimum_required (VERSION 2.8.10)

project (Get_Web_info)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
	message(STATUS "Setting build type to 'Debug' as none was specified.")
	set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
endif()

set (CMAKE_C_COMPILER               "/usr/bin/gcc")
set (CMAKE_C_FLAGS                  "-Wall -std=c99 -O3 -msse2 -msse3 -msse -msse4 -mfpmath=sse -march=native -fopenmp -ffp-contract=fast")
set (CMAKE_C_FLAGS_DEBUG            "-g3")
set (CMAKE_C_FLAGS_MINSIZEREL       "-Os -DNDEBUG")
set (CMAKE_C_FLAGS_RELEASE          "-O4 -DNDEBUG")
set (CMAKE_C_FLAGS_RELWITHDEBINFO   "-O2 -g")

set (CMAKE_CXX_COMPILER             "/usr/bin/g++")
set (CMAKE_CXX_FLAGS                "-Wall -std=c++11 -O3 -msse2 -msse3 -msse -msse4 -march=native -mfpmath=sse -fopenmp -ffp-contract=fast ")
set (CMAKE_CXX_FLAGS_DEBUG          "-g3")
set (CMAKE_CXX_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
set (CMAKE_CXX_FLAGS_RELEASE        "-O4 -DNDEBUG")
set (CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")

set (CMAKE_AR      "/usr/bin/llvm-ar")
set (CMAKE_LINKER  "/usr/bin/llvm-ld")
set (CMAKE_NM      "/usr/bin/llvm-nm")
set (CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
set (CMAKE_RANLIB  "/usr/bin/llvm-ranlib")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMMON_C_FLAGS}")

if (${CMAKE_SYSTEM_PROCESSOR} STREQUAL "x86_64")
	set(ARCH "amd64")
elseif (${CMAKE_SYSTEM_PROCESSOR} STREQUAL "amd64")
	set(ARCH "amd64")
elseif (${CMAKE_SYSTEM_PROCESSOR} STREQUAL "x86")
	set(ARCH "386")
elseif (${CMAKE_SYSTEM_PROCESSOR} STREQUAL "i386")
	set(ARCH "386")
elseif (${CMAKE_SYSTEM_PROCESSOR} STREQUAL "i686")
	set(ARCH "386")
elseif (${CMAKE_SYSTEM_PROCESSOR} MATCHES "^arm.*")
	set(ARCH "arm")
elseif (${CMAKE_SYSTEM_PROCESSOR} STREQUAL "aarch64")
	set(ARCH "aarch64")
else()
	message(FATAL_ERROR "Unknown processor:" ${CMAKE_SYSTEM_PROCESSOR})
endif()

if (${ARCH} STREQUAL "386" AND APPLE)
	set(ARCH "amd64")
endif()


set(
    CMAKE_CXX_FLAGS

    "${CMAKE_CXX_FLAGS} ${COMMON_C_FLAGS}\ " 
)


add_definitions (

)

add_subdirectory(src)