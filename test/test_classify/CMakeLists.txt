cmake_minimum_required( VERSION 3.10.2 )

project( classify_lib_test
	VERSION 0.1
	DESCRIPTION "Test per il modulo classify"
	)

add_executable( classify_lib_test src/test.c )

target_link_libraries( classify_lib_test
	PRIVATE
	LII::classify
	Unity
)

add_test(classify_lib_test classify_lib_test)
