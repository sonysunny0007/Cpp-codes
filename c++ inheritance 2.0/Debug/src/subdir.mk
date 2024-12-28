################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ inheritance\ 2.0.cpp 

CPP_DEPS += \
./src/c++\ inheritance\ 2.0.d 

OBJS += \
./src/c++\ inheritance\ 2.0.o 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ inheritance\ 2.0.o: ../src/c++\ inheritance\ 2.0.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ inheritance 2.0.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c++\ inheritance\ 2.0.d ./src/c++\ inheritance\ 2.0.o

.PHONY: clean-src

