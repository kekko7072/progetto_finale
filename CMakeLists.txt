cmake_minimum_required( VERSION 3.10.2 )

project( progetto_finale
         VERSION 0.1
         DESCRIPTION "Progetto finale del laboratorio di Informatica Industriale" )



if (MSVC)
	# warning level 4 and all warnings as errors
	add_compile_options(/W4 /WX)
else()
	# lots of warnings and all warnings as errors
	add_compile_options(-Wall -Wextra -pedantic)
endif()

set(TARGET_GROUP test CACHE STRING "Group to build")

# Create targets for building the (local) libraries.
add_subdirectory( lib/classify )
add_subdirectory( lib/image_helper )
add_subdirectory( lib/mnist )
add_subdirectory( lib/train )
add_subdirectory( lib/classify2 )
add_subdirectory( lib/train2 )

# Create the targets for the entire example-app.
add_subdirectory( app )


if(TARGET_GROUP STREQUAL production)
	add_subdirectory(app)
elseif(TARGET_GROUP STREQUAL test)
	include(CTest)

	add_subdirectory(external/Unity)
	add_subdirectory(test/test_image_helper)
    add_subdirectory(test/test_mnist)
    add_subdirectory(test/test_classify)
    add_subdirectory(test/test_train)

else()
	message(FATAL_ERROR "Given TARGET_GROUP unknown")
endif()
