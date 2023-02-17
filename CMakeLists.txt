cmake_minimum_required(VERSION 3.14)
project(GestionParking)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(test)
include_directories(include)
file(GLOB INCLUDES ../includes *.hpp)

set(SRC src/main.cpp ${INCLUDES} include/ListeCarteVolee.hpp src/Abonement.cpp src/ListeCarteVolee.cpp include/Interaction.hpp include/MoyenEntree.hpp include/Parking.hpp include/Borne.hpp include/Caisse.hpp include/Recu.hpp "include/CarteBancaire.hpp" include/Rapport.hpp src/Parking.cpp include/Personne.hpp src/Rapport.cpp src/Recu.cpp include/RecuCB.hpp src/RecuCB.cpp include/RecuCheque.hpp src/RecuCheque.cpp include/RecuEspece.hpp src/RecuEspece.cpp include/Surveillant.hpp include/Ticket.hpp include/CarteAbonement.hpp src/Ticket.cpp include/Validation.hpp "include/BorneSortie.hpp" include/BorneEntree.hpp src/Borne.cpp src/BorneEntree.cpp src/BorneSortie.cpp)

add_executable(GestionParking ${SRC})

install(TARGETS ${EXE} RUNTIME DESTINATION bin)