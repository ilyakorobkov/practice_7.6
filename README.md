# practice_7.6
1.1 Создание структуры директорий

    mkdir -p project/lib
    mkdir -p project/exe/libs/matrixlib

Файл matrix.h в директории project/lib/
Файл matrix.cpp в директории project/lib/
Файл CMakeLists.txt в директории project/lib/

Сборка динамической библиотеки

    cd project/lib
    mkdir build
    cd build
    cmake ..
    cmake --build 

Создание структуры директорий

    mkdir -p project/exe/src

Файл main.cpp в директории project/exe/src/
Файл CMakeLists.txt в директории project/exe/

Сборка и запуск

    cd project/exe
    mkdir build
    cd build
    cmake ..
    cmake --build .
