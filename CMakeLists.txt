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

# Create targets for building the (local) libraries.
add_subdirectory( lib/image_helper )
add_subdirectory( lib/mnist )
add_subdirectory( lib/train_2 )

# Create the targets for the entire example-app.
add_subdirectory( app )
