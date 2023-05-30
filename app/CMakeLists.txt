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

add_executable( train src/train.c)

target_link_libraries( train
	PRIVATE LII::mnist )

target_link_libraries( train
	PRIVATE LII::image_helper )

add_executable( classify src/classify.c)

target_link_libraries( classify
	PRIVATE LII::mnist )

target_link_libraries( classify
	PRIVATE LII::image_helper )
