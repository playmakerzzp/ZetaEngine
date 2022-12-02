mkdir build
pushd build
cmake -G "Visual Studio 2022" -Thost=x64 ..
cmake --build . --config debug
popd

