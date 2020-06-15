# this cmakelists file is hierarchically below the cmakelists in project folder

# after separating declare+define we add the cpp file
# into its own library
add_library(hela hello.cpp)

# add another library for the other functon 
# the binary name doesn't matter
add_library(summin blah.cpp)

# this shows the main executable binary from the main 
# file that executes all of your code
add_executable(main_bin main.cpp)

# we had two libraries above. here we link them both
# as main_bin requires hela
target_link_libraries(main_bin hela summin)