enable_testing()

add_executable(
        parkingTest
        test.cpp
        ../include/ListeCarteVolee.hpp ../src/Abonement.cpp ../src/ListeCarteVolee.cpp ../include/Interaction.hpp ../include/MoyenEntree.hpp ../include/Parking.hpp ../include/Bornes.hpp ../include/Caisse.hpp ../include/Recu.hpp "../include/CarteBancaire.hpp" ../include/Rapport.hpp)
target_link_libraries(
        parkingTest
        GTest::gtest_main
        gmock
)

include(GoogleTest)
gtest_discover_tests(parkingTest)
