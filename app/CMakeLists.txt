# ./app/CMakeLists.txt

cmake_minimum_required( VERSION 3.10.2 )

project( app
         VERSION 0.1
         DESCRIPTION "Applicativo del progetto finale" )

add_executable( app src/main.c)

target_link_libraries( app
	PRIVATE LII::classify )

target_link_libraries( app
	PRIVATE LII::mnist )

target_link_libraries( app
	PRIVATE LII::image_helper )

target_link_libraries( app
	PRIVATE LII::train )

target_link_libraries( app
	PRIVATE LII::train2 )

target_link_libraries( app
	PRIVATE LII::classify2 )


add_executable( app_2 src/main_2.c)

target_link_libraries( app_2
	PRIVATE LII::classify )

target_link_libraries( app_2
	PRIVATE LII::mnist )

target_link_libraries( app_2
	PRIVATE LII::image_helper )

target_link_libraries( app_2
	PRIVATE LII::train2 )

target_link_libraries( app_2
	PRIVATE LII::classify2 )