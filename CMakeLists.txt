project(hellotest)

find_package(KDE4 REQUIRED)
include (KDE4Defaults)
include_directories(${KDE4_INCLUDES})

set(hellotest_SRCS kioexample.cpp main.cpp)

kde4_add_executable(hellotest ${hellotest_SRCS})
target_link_libraries(hellotest ${KDE4_KDEUI_LIBS} ${KDE4_KIO_LIBS})
install(TARGETS hellotest  ${INSTALL_TARGETS_DEFAULT_ARGS})