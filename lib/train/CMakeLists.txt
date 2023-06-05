# ./lib/train/CMakeLists.txt

cmake_minimum_required( VERSION 3.10.2)

project( train
         VERSION 0.1
	 LANGUAGES C
         DESCRIPTION "Libreria per l'implemntazione delle funzioni train." )

add_library( train SHARED src/train.c)

target_include_directories( train
    PUBLIC include )


add_library( LII::train ALIAS train )

target_link_libraries( train
	PRIVATE LII::mnist)

target_link_libraries( train
        PRIVATE LII::image_helper)
