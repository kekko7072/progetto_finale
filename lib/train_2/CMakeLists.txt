cmake_minimum_required( VERSION 3.10.2)

project( train_2
         VERSION 0.9
	     LANGUAGES C
         DESCRIPTION "Libreria train_2.c" )

add_library( train_2 STATIC src/train_2.c)


target_include_directories( train_2 
    PUBLIC include )

add_library( LII::train_2 ALIAS train_2 )

target_link_libraries( train_2
        PRIVATE LII::mnist)

target_link_libraries( train_2
        PRIVATE LII::image_helper)