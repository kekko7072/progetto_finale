# ./lib/classify/CMakeLists.txt

cmake_minimum_required( VERSION 3.10.2)

project( classify
         VERSION 0.1
	 LANGUAGES C
         DESCRIPTION "Libreria per l'implemntazione delle funzioni classify." )

add_library( classify SHARED src/classify.c)

target_include_directories( classify
    PUBLIC include )


add_library( LII::classify ALIAS classify )

target_link_libraries( classify
	PRIVATE LII::mnist)

target_link_libraries( classify
        PRIVATE LII::image_helper)