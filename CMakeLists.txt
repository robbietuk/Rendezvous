cmake_minimum_required(VERSION 3.22)
project(Rendezvous)


set(CMAKE_CXX_STANDARD 20)


add_executable("${PROJECT_NAME}" main.cpp)


install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)
install(FILES ${PROJECT_NAME}.h DESTINATION ${CMAKE_INSTALL_PREFIX}/src)

include(CTest)

add_test("test1" "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}")







include_directories(imgui)

#####
# find_package(PkgConfig REQUIRED)
# pkg_search_module(GLFW REQUIRED glfw3)
# include_directories(${GLFW_INCLUDE_DIRS})
#target_link_libraries(Rendezvous ${GLFW_LIBRARIES})
#target_link_libraries(Rendezvous ${GLFW_STATIC_LIBRARIES})


