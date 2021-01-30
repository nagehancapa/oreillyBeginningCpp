1. adim olarak: geometry i derle
g++ -std=c++11 -pthread -MMD -c ../src/geometry.cpp -o ../src/geometry.o -I ../src
 
 
2. adim olarak tes app i derle, derlerken geometryinin implementasyon detaylarini iceren o dosyasini parametre olarak ayni googletest gibi vermeyi unutma

g++ -o test_app -I ../../googletest-release-1.10.0/googletest/include -I . -I ../src -pthread main.cpp ../../lib/libgtest.a ../src/geometry.o
