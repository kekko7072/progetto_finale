# ./lib/mnist/CMakeLists.txt

cmake_minimum_required( VERSION 3.10.2)

project( mnist
         VERSION 0.9
	 LANGUAGES C
         DESCRIPTION "Libreria per l'utilizzo di mnist." )

add_library( mnist SHARED src/mnist.c)

target_include_directories( mnist
    PUBLIC include )

add_library( LII::mnist ALIAS mnist )
