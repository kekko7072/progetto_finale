cmake_minimum_required( VERSION 3.10.2 )

project( train_lib_test
	VERSION 0.1
	DESCRIPTION "Test per il modulo train"
	)

add_executable( train_lib_test src/test.c )

target_link_libraries( train_lib_test
	PRIVATE
	LII::train
	Unity
)

add_test(train_lib_test train_lib_test)

target_link_libraries( train_lib_test
	PRIVATE LII::image_helper )