#!/bin/bash
mkdir -p build
cd build
cmake -G "Visual Studio 17 2022 Win64" ..
cmake --build . --config debug

