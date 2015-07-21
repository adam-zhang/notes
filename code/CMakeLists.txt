project(notes)
cmake_minimum_required(VERSION 2.8)
include_directories(${PROJECT_SOURCE_DIR}/lib)
add_subdirectory(lib)
find_package(Qt4 REQUIRED)
include(${QT_USE_FILE})
set(sources appMain.cpp
	MainWindow.cpp
	)
set(moc_headers MainWindow.h)
QT4_WRAP_CPP(mocs ${moc_headers})
add_executable(notes ${sources} ${mocs})
target_link_libraries(notes
	libHello
	${QT_LIBRARIES})
