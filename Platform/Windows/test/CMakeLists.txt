add_executable(TextureLoadTest TextureLoadTest.cpp)
target_link_libraries(TextureLoadTest 
                        ZetaGameEngine
)

add_test(NAME TEST_TextureLoad COMMAND TextureLoadTest)

