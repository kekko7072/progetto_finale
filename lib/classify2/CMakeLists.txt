# ./lib/classify/CMakeLists.txt

cmake_minimum_required( VERSION 3.10.2)

project( classify2
         VERSION 0.1
	 LANGUAGES C
         DESCRIPTION "Libreria per l'implemntazione delle funzioni classify 5.2." )

add_library( classify2 SHARED src/classify2.c)

target_include_directories( classify2
    PUBLIC include )


add_library( LII::classify2 ALIAS classify2 )

target_link_libraries( classify2
	PRIVATE LII::mnist)

target_link_libraries( classify2
        PRIVATE LII::image_helper)