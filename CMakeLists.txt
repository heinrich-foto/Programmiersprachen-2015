cmake_minimum_required (VERSION 2.8) 
project(Aufgabenblatt1)

set(HEADER_FILES utility.hpp)


add_executable(helloworld hello_world.cpp)

add_executable(tests 
				tests.cpp 
				utility.cpp
				${HEADER_FILES}
)

add_executable(miles 
				miles.cpp 
				utility.cpp
				${HEADER_FILES}
)


add_custom_command(
	OUTPUT test.txt
	COMMAND tests
	VERBATIM
)

add_custom_target(
  run_test ALL
  DEPENDS test.txt
)