# CMakeList.txt: проект CMake для Minlang; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Minlang "Minlang.cpp"  "defs.h" "defs.cpp" "parser.h" "parser.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Minlang PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
