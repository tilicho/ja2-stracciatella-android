cd ../../
mkdir build_linux
cd build_linux
cmake -G "Ninja" \
    -DCMAKE_INSTALL_PREFIX=build2 \
    -DBUILD_SDL_LIB=ON \
    -DWITH_UNITTESTS=OFF \
    ../

