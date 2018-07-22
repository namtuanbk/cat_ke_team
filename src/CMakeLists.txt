cmake_minimum_required (VERSION 2.8.10)

include_directories(

	../include
)

set(
    APP_SOURCES
    
    main.cpp

)

link_directories(
	../lib
)

add_executable(
    APP

    ${APP_SOURCES}
)

target_link_libraries(
    APP

    -lpthread
    -lchilkat-9.5.0

)
