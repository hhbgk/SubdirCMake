cmake_minimum_required(VERSION 3.4.1)

add_subdirectory(sub)
add_subdirectory(subtract)
add_library( hello-sub

             SHARED

             hello.c )

find_library(log-lib

              log )

target_link_libraries( hello-sub
                       sub-lib
                       subtract-lib

                       ${log-lib} )