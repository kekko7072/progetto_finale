cmake_minimum_required( VERSION 3.10.2 )

project( mnist_lib_test
	VERSION 0.1
	DESCRIPTION "Test per il modulo mnist"
	)

add_executable( mnist_lib_test src/test.c )

target_link_libraries( mnist_lib_test
	PRIVATE
	LII::mnist
	Unity
)

add_test(mnist_lib_test mnist_lib_test)
