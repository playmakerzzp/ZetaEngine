@echo off
git submodule update --init External\src\opengex
mkdir External\build\opengex
pushd External\build\opengex
cmake -DCMAKE_INSTALL_PREFIX=..\..\ -G "Visual Studio 17 2022" -Thost=x86 ..\..\src\opengex
cmake --build . --config debug --target install
popd

