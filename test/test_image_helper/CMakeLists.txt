cmake_minimum_required( VERSION 3.10.2 )

project( image_helper_lib_test
	VERSION 0.1
	DESCRIPTION "Test per il modulo image_helper"
	)

add_executable( image_helper_lib_test src/test.c )

target_link_libraries( image_helper_lib_test
	PRIVATE
	LII::image_helper
	Unity
)

add_test(image_helper_lib_test image_helper_lib_test)
