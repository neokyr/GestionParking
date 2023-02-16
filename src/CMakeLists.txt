set(SRC main.cpp)

add_executable(GestionParking ${SRC})

install(TARGETS ${EXE} RUNTIME DESTINATION bin)