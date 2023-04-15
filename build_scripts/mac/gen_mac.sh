cd ../../
mkdir build_mac
cd build_mac
cmake -G "Ninja" \
    -DCMAKE_BUILD_TYPE=Debug \
    -DBUILD_SDL_LIB=ON \
    -DWITH_UNITTESTS=OFF \
    -DCMAKE_TOOLCHAIN_FILE=`pwd`/../cmake/toolchain-macos.cmake \
    ../
