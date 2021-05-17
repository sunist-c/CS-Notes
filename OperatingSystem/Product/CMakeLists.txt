cmake_minimum_required(VERSION 3.16)
project(SunistOS)

set(CMAKE_CXX_STANDARD 14)

include_directories(libs)
include_directories(core)
include_directories(bin)

add_executable(
        SunistOS
        main.cpp
        tools/csvParser.cpp
        tools/csvParser.h
        tools/errorParser.cpp
        tools/errorParser.h
        core/interface/ImessageProcessor.h
        core/messagequeue/message.h
        libs/utils/output/argument_parser.cpp
        libs/utils/output/argument_parser.h
        libs/utils/output/argument_generator.cpp
        libs/utils/output/argument_generator.h
        core/memory/memory_controller.cpp
        core/memory/memory_controller.h
        core/process/process_controller.cpp
        core/process/process_controller.h
        core/process/process.cpp
        core/process/process.h
        core/memory/process_memory_controller.cpp
        core/memory/process_memory_controller.h
        libs/utils/output/displayer.cpp libs/utils/output/displayer.h libs/utils/output/model/error.cpp libs/utils/output/model/error.h libs/utils/input/loader.cpp libs/utils/input/loader.h libs/utils/input/model/csv_file.cpp libs/utils/input/model/csv_file.h libs/datastructures/template/t_array.hpp libs/datastructures/template/t_rb_tree.hpp libs/datastructures/template/t_hash_map.hpp libs/datastructures/template/t_list.hpp libs/datastructures/template/t_algorithm.hpp libs/utils/fileoperator/md5.cpp libs/utils/fileoperator/md5.h libs/datastructures/template/t_blocked_list.hpp libs/datastructures/template/t_datatable.hpp)

add_executable(
        Experiment_01
        tests/experiment_01/__experiment_01_main.cpp core/device/device_controller.cpp core/device/device_controller.h)

add_executable(
        Experiment_02
        tests/experiment_02/__experiment_02_main.cpp)

add_executable(
        Experiment_03
        tests/experiment_03/__experiment_03_main.cpp
)