@echo off
git submodule update --init External/src/crossguid
mkdir External\build\crossguid
pushd External\build\crossguid
cmake -DCMAKE_INSTALL_PREFIX=../../ -G "Visual Studio 17 2022" -Thost=x86 ../../src/crossguid
cmake --build . --config relwithdebuginfo --target install
popd

