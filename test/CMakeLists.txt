enable_testing()

add_executable(
        parkingTest
        test.cpp
        ../include/ListeCarteVolee.hpp ../src/Abonement.cpp ../src/ListeCarteVolee.cpp ../include/Interaction.hpp ../include/MoyenEntree.hpp ../include/Parking.hpp ../include/Borne.hpp ../include/Caisse.hpp ../include/Recu.hpp "../include/CarteBancaire.hpp" ../include/Rapport.hpp ../src/Parking.cpp ../include/Personne.hpp ../src/Rapport.cpp ../src/Recu.cpp ../include/RecuCB.hpp ../src/RecuCB.cpp ../include/RecuCheque.hpp ../src/RecuCheque.cpp ../include/RecuEspece.hpp ../src/RecuEspece.cpp ../include/Surveillant.hpp ../include/Ticket.hpp ../include/CarteAbonement.hpp ../src/Ticket.cpp ../include/Validation.hpp "../include/BorneSortie.hpp" ../include/BorneEntree.hpp ../src/Borne.cpp ../src/BorneEntree.cpp ../src/BorneSortie.cpp)
target_link_libraries(
        parkingTest
        GTest::gtest_main
        gmock
)

include(GoogleTest)
gtest_discover_tests(parkingTest)
