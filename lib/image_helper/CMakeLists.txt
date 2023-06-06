# ./lib/image_helper/CMakeLists.txt

cmake_minimum_required( VERSION 3.10.2)

project( image_helper
         VERSION 0.9
	 LANGUAGES C
         DESCRIPTION "Libreria per l'implemntazione delle funzioni di helper." )

add_library( image_helper SHARED src/image_helper.c)

target_include_directories( image_helper
    PUBLIC include )


add_library( LII::image_helper ALIAS image_helper )

target_link_libraries( image_helper
	PRIVATE LII::mnist )