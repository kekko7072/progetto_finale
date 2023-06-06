cmake_minimum_required( VERSION 3.10.2)

project( train2
         VERSION 0.9
	     LANGUAGES C
         DESCRIPTION "Libreria train2.c" )

add_library( train2 STATIC src/train2.c)


target_include_directories( train2 
    PUBLIC include )

add_library( LII::train2 ALIAS train2 )

target_link_libraries( train2
        PRIVATE LII::mnist)

target_link_libraries( train2
        PRIVATE LII::image_helper)