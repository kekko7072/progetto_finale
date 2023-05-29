# ./app/CMakeLists.txt

cmake_minimum_required( VERSION 3.10.2 )

project( app
         VERSION 0.1
         DESCRIPTION "Applicativo del progetto finale" )

add_executable( app src/main.c)

target_link_libraries( app
	PRIVATE LII::mnist )

target_link_libraries( app
	PRIVATE LII::image_helper )

