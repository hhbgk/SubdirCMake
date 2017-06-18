cmake_minimum_required(VERSION 3.4.1)
aux_source_directory(. SRC)
add_library(subtract-lib ${SRC})