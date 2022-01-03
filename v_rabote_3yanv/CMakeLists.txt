cmake_minimum_required(VERSION 3.20)
project(push_swap C)

set(CMAKE_C_STANDARD 99)

add_executable(push_swap push_swap.c push_swap.h utils.c utils2.c write_arg.c ft_split.c instr_s.c list.c instr_p.c instr_r.c instr_rr.c sort.c list2.c global_sort.c list3.c)
