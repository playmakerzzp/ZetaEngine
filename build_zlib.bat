@echo off
git submodule update --init External/src/zlib
mkdir External\build\zlib
pushd External\build\zlib
cmake -DCMAKE_INSTALL_PREFIX=../../ -G "Visual Studio 17 2022" -Thost=x64 ../../src/zlib
cmake --build . --config release --target install
popd


