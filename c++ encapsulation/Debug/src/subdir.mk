################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c++\ encapsulation.cpp 

CPP_DEPS += \
./src/c++\ encapsulation.d 

OBJS += \
./src/c++\ encapsulation.o 


# Each subdirectory must supply rules for building sources it contributes
src/c++\ encapsulation.o: ../src/c++\ encapsulation.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c++ encapsulation.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c++\ encapsulation.d ./src/c++\ encapsulation.o

.PHONY: clean-src

