cmake_minimum_required(VERSION 3.31)
project(Expressions C)

set(CMAKE_C_STANDARD 11)

add_executable(broker broker-commission.c)
add_executable(switch switch-statement.c)
add_executable(legal-date legal-date.c)
add_executable(area-code area-code.c
        wind-speed.c
        tax.c
        largest-smallest.c
        flight-arrival.c
        date-sorting.c
        grade-switch.c
        digit-2-word.c)
add_executable(digit-counter digit-counter.c)
add_executable(time time-convert.c)
add_executable(wind-speed wind-speed.c)
add_executable(tax tax.c)
add_executable(upc-edit upc.c)
add_executable(largest-smallest largest-smallest.c)
add_executable(flight-arrival flight-arrival.c)
add_executable(date-sorting date-sorting.c)
add_executable(grade-switch grade-switch.c)
add_executable(digit-2-word digit-2-word.c)
