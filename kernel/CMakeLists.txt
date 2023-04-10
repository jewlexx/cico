add_executable(kernel main.c)

# pull in common dependencies
target_link_libraries(kernel pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(kernel)

# add url via pico_set_program_url
example_auto_set_url(kernel)
